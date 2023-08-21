#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * dlistint_len - program to return length of linked-list
 * @h: head of the linked list
 *
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}

	return (len);
}
