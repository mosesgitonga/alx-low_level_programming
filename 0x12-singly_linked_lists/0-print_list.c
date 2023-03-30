#include <stdio.h>
#include "lists.h"
/**
 * print_list - printing list
 * @h: head
 * Return:count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t  *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
			count++;
		}
		current = current->next;
	}

	return (count);
}
