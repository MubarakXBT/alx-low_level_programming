#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *Newnode, *h;
	Newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (Newnode == NULL)
		return (NULL);

	Newnode->n = n;
	Newnode->next = NULL;
	
	if (*head == NULL)
	{
		Newnode->prev = NULL;
		*head = Newnode;
		return (*head);
	}

	h = *head;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = Newnode;
	Newnode->prev = h;

	return (*head);

}
