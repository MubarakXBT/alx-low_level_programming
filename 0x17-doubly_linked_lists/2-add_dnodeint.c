#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * add_dnodeint - a function to add to a new-node
 * @n: value to append in node
 * @head: head of node
 *
 * Return: Newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Newnode;
	dlistint_t *h;

	Newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (Newnode == NULL)
		return (NULL);
	h = *head;
	Newnode->n = n;
	Newnode->prev = NULL;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	Newnode->next = h;

	if (h != NULL)
		h->prev = Newnode;

	*head = Newnode;

	return (Newnode);
}
