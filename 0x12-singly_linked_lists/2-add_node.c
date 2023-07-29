#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - add node at beginnineg of a list
 * @head: the header of the list to be displaced
 * @str: the data to be added
 *
 * Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Newnode = (list_t *)malloc(sizeof(list_t));

	if (Newnode == NULL)
		return (NULL);

	Newnode->str = strdup(str);
	if (Newnode->str == NULL)
		return(NULL);

	Newnode->len = strlen(str);
	Newnode->next = *head;
	*head = Newnode;

	return (Newnode);
}
