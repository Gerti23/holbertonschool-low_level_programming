#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocated memory for an array using malloc
 * @nmemb: number of elemets
 * @size: size of bytes for each element
 * Return: NULL if nmemb or size is 0 and if malloc failes else return
 * pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_arr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	my_arr = malloc(nmemb * size);

	if (my_arr == NULL)
		return (NULL);

	j = 0;
	while (j < nmemb * size)
	{
		my_arr[j] = 0;
		j++;
	}
	return (my_arr);
}
