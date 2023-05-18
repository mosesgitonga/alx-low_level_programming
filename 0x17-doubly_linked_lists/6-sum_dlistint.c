#include "lists.h"
/**
 * sum_dlistint - finding sum of data in list
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	tmp = head;
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
