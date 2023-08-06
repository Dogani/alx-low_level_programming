#include "lists.h"
/**
 * print_listint - function that prints all the elements of
 * a listint_t list.
 *
 * @h: Parameter Pointer to the head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t n = 0;

if (h == NULL)
{
return (0);
}
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
n++;
}
return (n);
}
administrator@TTCLHQISSLT030-2 0x13-more_singly_linked_lists % cat 1-listint_len.c
#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: Parameter Pointer to the head of the linked list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h != NULL)
{
h = h->next;
n++;
}

return (n);
}
