#include <stdio.h>
#include "lists.h"
/**
 *print_listint_safe - prints a singly list once
 * @head: head
 *Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *current_Node;
	size_t count = 0;

	current_Node = head;

	while (current_Node->next != NULL)
	{
		printf("[%p] %d\n", (void *)current_Node, current_Node->n);
		count++;
		temp = current_Node;
		current_Node = current_Node->next;
		if (temp <= current_Node)
		{
			printf("-> [%p] %d\n", (void *)current_Node, current_Node->n);
			exit(98);
		}

	}
	return (count);

}
