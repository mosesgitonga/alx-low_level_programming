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

	unsigned int i;

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
	for (i = 0; i < index - 1; i++)
	{
		if (currentNode->next == NULL)
		{
			return (-1);
		}
		currentNode = currentNode->next;
	}
	temp = currentNode->next;
	currentNode->next = temp->next;
	free(temp);

	return (1);
}
