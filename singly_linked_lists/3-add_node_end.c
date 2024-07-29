#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: first node
 * @str: data of node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end, *iterator;
	int j, c = 0;

	new_node_end = malloc(sizeof(list_t));
	if (new_node_end != NULL)
	{
		new_node_end->str = strdup(str);
		if (new_node_end->str == NULL || str == NULL)
		{
			free(new_node_end);
			return (NULL);
		}
		for (j = 0; str[j] != '\0'; j++)
			c++;
		new_node_end->len = c;
		new_node_end->next = NULL;
		if (*head == NULL)
		{
			*head = new_node_end;
			return (new_node_end);
		}
		iterator = *head;

		for (; iterator->next != NULL; iterator = iterator->next)
			;
		iterator->next = new_node_end;
		return (new_node_end);
	}
	return (NULL);
}
