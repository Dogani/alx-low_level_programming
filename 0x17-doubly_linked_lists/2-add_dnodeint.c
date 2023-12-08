#include "lists.h"

/**
 * add_dnodeint - function to add new node in alist
 * @head: pointer to head of the list
 * @n: number of a node to be added
 *
 * Return: new added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_new;

	node_new = malloc(sizeof(dlistint_t));
	if (!node_new || !head)
		return (NULL);
	node_new->n = n;
	node_new->next = *head;
	node_new->prev = NULL;
	if (*head)
		(*head)->prev = node_new;
	*head = node_new;
	return (node_new);
}
