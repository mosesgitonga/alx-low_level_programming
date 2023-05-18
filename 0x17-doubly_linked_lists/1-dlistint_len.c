#include "lists.h"
/**
 * dlistint_len - number of nodes
 * @h: head
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (0);
	}

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
