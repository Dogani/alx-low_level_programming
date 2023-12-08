#include "lists.h"

/**
 * add_dnodeint_end - function to add node at the end of list
 * @head: pointer to head
 * @n: number of node to b inserted
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_current;
	dlistint_t *node_new;

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->n = n;

	node_new->next = NULL;
	node_new->prev = NULL;

	if (*head == NULL)
	{
		*head = node_new;
	}
	else
	{
		node_current = *head;

		while (node_current->next != NULL)
			node_current = node_current->next;

		node_current->next = node_new;
		node_new->prev = node_current;
	}
	return (node_new);
}
