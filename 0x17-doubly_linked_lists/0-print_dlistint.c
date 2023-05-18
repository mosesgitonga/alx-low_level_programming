#include "lists.h"
/**
 * print_dlistint - prints data and count number of nodes
 * @h: head
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (0);
	}
	count = 0;
	while (h != NULL)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
