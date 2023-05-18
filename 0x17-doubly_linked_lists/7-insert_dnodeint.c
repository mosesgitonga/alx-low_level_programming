#include "lists.h"
/**
*insert_dnodeint_at_index -  inserting node
*@h: head
*@n: value data
*@idx: index
*Return: newnode
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t count;
	dlistint_t *tmp;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	newnode->n = n;

	if (*h == NULL && idx == 0)
	{
		*h = newnode;
		return (newnode);
	}

	count = 0;
	tmp = *h;

	while (tmp != NULL)
	{
		if (count == idx)
		{
			if (tmp->prev != NULL)
			{
				tmp->prev->next = newnode;
			}
			else
			{
				*h = newnode;
			}
			newnode->prev = tmp->prev;
			newnode->next = tmp;
			tmp->prev = newnode;
			return (newnode);
		}

		count++;
		tmp = tmp->next;
	}
	return (newnode);
}
