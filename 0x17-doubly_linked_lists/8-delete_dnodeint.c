#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	size_t count;

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	count = 0;
	tmp = *head;
	while (tmp != NULL && count < index) 
	{
		tmp = tmp->next;
		count++;
	}
	
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp;
	}

	free(tmp);
	return (1);
}
