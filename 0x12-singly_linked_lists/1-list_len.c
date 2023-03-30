#include <stdio.h>
#include "lists.h"
/**
 * list_len - printing list
 * @h: head
 * Return:count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t  *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
		count++;
		}
		else
		{
			count++;
		}
		current = current->next;
		}
	return (count);
}
