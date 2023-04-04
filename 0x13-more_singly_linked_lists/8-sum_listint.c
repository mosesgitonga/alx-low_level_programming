#include "lists.h"
/**
 * sum_listint - prints sum of values in the linked list
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *currentNode;

	currentNode = head;
	if (head == NULL)
	{
		return (0);
	}
	while (currentNode)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}
	return (sum);
}
