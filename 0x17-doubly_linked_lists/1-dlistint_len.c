#include "lists.h"

/**
 * dlistint_len - fn to return number of nodes in list
 * @h: pointer head
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
