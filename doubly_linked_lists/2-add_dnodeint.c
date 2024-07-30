#include "lists.h"
/**
 * add_dnodeint - function that add a new node at the beginning of
 * a dlistint_t list
 * @head: head pointer
 * @n: element of node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = tmp;
	}
	*head = tmp;
	return (tmp);
}
