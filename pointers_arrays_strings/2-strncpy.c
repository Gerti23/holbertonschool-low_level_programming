#include <stdio.h>
/**
 * _strncpy - Write a function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: Your function should work exactly like strncpy
 *
 * Return: copy
 */
char *_strncpy(char *dest,  char *src, int n)
{
char *copy = dest;

	while (*src && n > 0)

{
		*dest++ = *src++;
		n--;

}

	while (n > 0)
{
		*dest++ = '\0';
		n--;
}

	return (copy);

}
