#include "lists.h"
/**
 * get_nodeint_at_index - get the node value at a certain index
 * @head: head
 * @index: index
 * Return: currentNode
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode;
	unsigned int count = 0;

	currentNode = head;
	while (currentNode  != NULL && count < index)
	{
		count++;
		currentNode = currentNode->next;
	}
	return (currentNode);
}
