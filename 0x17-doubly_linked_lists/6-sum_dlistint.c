#include "lists.h"

/**
 * sum_dlistint - return sum of alll the data
 * @head: pointer to the head of
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp_var;
	int sum = 0;

	temp_var = head;
	while (temp_var != NULL)
	{
		sum += temp_var->n;
		temp_var = temp_var->next;
	}
	return (sum);
}
