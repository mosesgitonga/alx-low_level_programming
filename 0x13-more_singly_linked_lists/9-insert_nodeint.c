#include "lists.h"
/**
 * insert_nodeint_at_index - insert node in between
 * @head: head
 * @idx: index
 * @n: value of newnode
 * Return: new_node;
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentNode, *new_node, *temp;
	unsigned int count = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = *head;
		*head = new_node;
		return (new_node);
	}

	currentNode = *head;

	while (currentNode)
	{
		count++;
		temp = currentNode;
		if (idx == count)
		{

			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);

		}
		currentNode = currentNode->next;
	}
	return (NULL);
}
