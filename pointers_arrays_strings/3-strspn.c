#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string to be searched
* @accept: the string containing the list of characters to match in s
*
* Return: the number of bytes in the initial segment of s which consist only
* of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

while (*s)
{
	for (p = accept; *p; p++)
	{
		if (*s == *p)
		{
			count++;
			break;
		}
	}
	if (*p == '\0')
	{
		return (count);
	}
	s++;
}

	return (count);
}
