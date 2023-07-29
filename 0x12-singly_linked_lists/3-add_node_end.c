#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - appends a new node to a linked_list
 * @head: first node in list
 * @str: data for the new node
 *
 * Return: complete node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Newnode = (list_t *)malloc(sizeof(list_t));
	list_t *current = *head;

	if (Newnode == NULL)
		return (NULL);

	Newnode->str = strdup(str);
	if (Newnode->str == NULL)
	{
		free(Newnode);
		return (NULL);
	}

	Newnode->len = strlen(str);
	Newnode->next = NULL;

	if (*head == NULL)
	{
		*head = Newnode;
		return (Newnode);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = Newnode;
	}

	return (Newnode);
}
