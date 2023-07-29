#include <stdio.h>
#include "lists.h"
/**
 * list_len - A function that return no of nodes in a linked list
 * @h: nodes
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	return (i);
}
