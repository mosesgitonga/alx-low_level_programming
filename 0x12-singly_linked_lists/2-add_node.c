#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function to add node at the beginning
 * @head: the head of list
 * @str: string
 * Return: newnode
 *
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = *head;

	*head = newnode;

	return (newnode);

}
