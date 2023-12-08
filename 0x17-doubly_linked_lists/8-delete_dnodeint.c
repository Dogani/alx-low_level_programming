#include "lists.h"


/**
 * delete_dnodeint_at_index - function to delete a node at index
 * @head: pointer to head
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_var = *head;
	unsigned int n = 0;

	if (!head || !temp_var)
		return (-1);

	if (index == 0)
	{
		temp_var = temp_var->next;
		free(*head);
		*head = temp_var;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (; temp_var; n++)
	{
		if (n == index)
		{
			if (temp_var->next)
			{
				(temp_var->prev)->next = temp_var->next;
				(temp_var->next)->prev = temp_var->prev;
				free(temp_var);
				return (1);
			}
			else
			{
				(temp_var->prev)->next = NULL;
				free(temp_var);
				return (1);
			}
		}
		temp_var = temp_var->next;
	}
	return (-1);
}
