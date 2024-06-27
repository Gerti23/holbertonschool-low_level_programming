#include <stdio.h>
/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest,  char *src, int n) {
	char *copy = dest;

	while (*src && n > 0) {
		*dest++ = *src++;
		n--;
}

	while (n > 0) {
		*dest++ = '\0';
		n--;
	}

	return copy;
}
