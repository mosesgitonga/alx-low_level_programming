#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: head
 * @index: index
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *temp;

	unsigned int count = 0;

	if (*head == NULL)
	{
		return (1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	currentNode = *head;
	while (currentNode != NULL && count < index - 1)
	{
		currentNode = currentNode->next;
		count++;
	}

	if (currentNode == NULL || currentNode->next == NULL)
	{
		return (0);
	}

	temp = currentNode->next;
	currentNode = currentNode->next->next;

	free(temp);
	return (1);
}
