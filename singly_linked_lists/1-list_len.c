#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: the first element of a linked list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t c;

	c = 0;

	for (; h != NULL; c++, h = h->next)
		;

	return (c);
}
