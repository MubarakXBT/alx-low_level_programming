#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * add_dnodeint - a function to add to a new-node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (Newnode == NULL)
		return (NULL);
	Newnode->n = n;
	Newnode->next = *head;
	*head = Newnode;

	return (Newnode);
}
