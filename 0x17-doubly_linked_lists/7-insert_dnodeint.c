#include "lists.h"
#include <stdio.h>
/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *Newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	dlistint_t *back, *front;
	const int m = n;
	unsigned int len = 0;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	current = *h;

	if (idx == 0)
		return(add_dnodeint(h, m));
	else if (idx == len - 1)
		return(add_dnodeint_end(h, m));
	else if (idx >= len)
	{
		printf("here\n");
		return (NULL);
	}

	len = 0;
	Newnode->n = n;
	while (current != NULL)
	{
		if (len == idx)
		{
			front = current;
			back = current->prev;
			break;
		}
		current = current->next;
		len++;
	}

	front->prev = Newnode;
	Newnode->next = front;
	back->next = Newnode;
	Newnode->prev = back;

	return (*h);
}
