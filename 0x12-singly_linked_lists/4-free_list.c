#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function to free list
 * @head: sddrress of first num
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current->next);
		free(current);
	}
}
