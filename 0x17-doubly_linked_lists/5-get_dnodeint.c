#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index -function that returns nth  of linkedlist
 * @head: pointer to the head
 * @index: index
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_var = head;
	unsigned int p = 0;

	if (head == NULL)
		return (NULL);
	while (temp_var != NULL)
	{
		if (p == index)
			return (temp_var);
		temp_var = temp_var->next;
		p++;
	}
	return (NULL);
}
