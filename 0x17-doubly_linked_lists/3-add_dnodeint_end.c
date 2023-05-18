#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: head of list
 * @n: value of newnode
 * Return: current node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (curr == NULL)
	{
		return (NULL);
	}

	curr->n = n;
	curr->next = NULL;

	if (*head == NULL)
	{
		curr->prev = NULL;
		*head = curr;
		return (curr);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;

	}
	temp->next = curr;
	curr->prev = temp;
	return (curr);
}
