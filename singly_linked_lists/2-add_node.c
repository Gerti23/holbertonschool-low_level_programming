#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: data of node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int j, c = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)
		return (NULL);
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		for (j = 0; str[j] != '\0'; j++)
			c++;
		new_node->len = c;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
