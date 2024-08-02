#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

void close_file(int fd, const char *filename) {
    if (close(fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[]) {
    int file_from, file_to, read_bytes, write_bytes;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close_file(file_from, argv[1]);
        exit(99);
    }

    while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0) {
        write_bytes = write(file_to, buffer, read_bytes);
        if (write_bytes == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close_file(file_from, argv[1]);
            close_file(file_to, argv[2]);
            exit(99);
        }
    }

    if (read_bytes == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close_file(file_from, argv[1]);
        close_file(file_to, argv[2]);
        exit(98);
    }

    close_file(file_from, argv[1]);
    close_file(file_to, argv[2]);

    return 0;
}

