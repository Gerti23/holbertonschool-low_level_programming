#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: head
 * @idx: index of node
 * @n: element of node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_node, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp_node = *h;
	while (idx > 1)
	{
		tmp_node = tmp_node->next;
		if (tmp_node == NULL)
			return (NULL);
		idx--;
	}
	if (tmp_node->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = tmp_node;
	new_node->next = tmp_node->next;
	tmp_node->next->prev = new_node;
	tmp_node->next = new_node;
	return (new_node);
}
