#include "lists.h"
/**
 * pop_listint - deletes the head
 * @head: head
 * Return: val;
 */
int pop_listint(listint_t **head)
{

	if (*head != NULL)
	{
		listint_t *temp = *head;
		int val = temp->n;

		*head = (*head)->next;
		free(temp);


		return (val);

	}
	return (0);
}
