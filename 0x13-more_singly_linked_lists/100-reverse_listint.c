#include "lists.h"
/**
 * reverse_listint - reversing a singly list
 * @head: head
 * Return: reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentNode, *prevNode, *nextNode;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	currentNode = *head;
	prevNode = NULL;
	nextNode = NULL;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;

		currentNode->next = prevNode;

		prevNode = currentNode;
		currentNode = nextNode;
	}

	*head = prevNode;

	return (*head);
}
