#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that free a list_t list
 * @head: first element
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
