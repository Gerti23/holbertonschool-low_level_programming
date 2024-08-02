
#include "main.h"
/**
 * read_textfile - read a text file and print it to POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected the amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_f, write_f;
	char *text;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	read_f = read(file, text, letters);
	if (read_f == -1)
		return (0);
	write_f = write(STDOUT_FILENO, text, read_f);
	if (write_f == -1)
		return (0);

	free(text);
	close(file);
	return (read_f);
}
