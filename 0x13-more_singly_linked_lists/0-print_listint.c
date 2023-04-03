#include "lists.h"
#include <stdio.h>
/**
 * print_listint - printing list
 * @h: head
 * Return: count
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
