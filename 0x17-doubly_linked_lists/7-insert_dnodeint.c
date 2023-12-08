#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert new node at a given position
 * @h: pointer to head
 * @idx: index to new inserted node
 * @n: value of a new node
 * Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_new, *temp_var;
	unsigned int i = 0;

	node_new = malloc(sizeof(dlistint_t));
	temp_var = *h;
	if (!h || !node_new)
		return (NULL);
	node_new->n = n;

	if (!(*h))
	{
		node_new->prev = NULL;
		node_new->next = NULL;
		*h = node_new;
		return (node_new);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; temp_var; i++)
	{
		if (i == idx)
		{
			node_new->prev = temp_var->prev;
			(temp_var->prev)->next = node_new;
			temp_var->prev = node_new;
			node_new->next = temp_var;
			return (node_new);
		}
		else if (!temp_var->next && 1 + i == idx)
			return (add_dnodeint_end(h, n));
		temp_var = temp_var->next;
	}
	return (NULL);
}
