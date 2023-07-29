#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Newnode = (list_t *)malloc(sizeof(list_t));

	Newnode->str = strdup(str);
	Newnode->len = strlen(str);
	Newnode->next = *head;
	*head = Newnode;

	return (Newnode);
}
