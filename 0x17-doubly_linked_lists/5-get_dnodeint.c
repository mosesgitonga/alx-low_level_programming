#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index to be retrived
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	size_t count;

	if (head == NULL)
	{
		return  (NULL);
	}
	count = 0;
	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);

		}
		count++;
		tmp = tmp->next;

	}
	return (NULL);
}
