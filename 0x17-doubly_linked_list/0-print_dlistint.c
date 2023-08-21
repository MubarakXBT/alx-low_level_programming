#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - program to print a linked-list
 * @h: head of the linked list
 *
 * Return:  length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
