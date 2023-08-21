#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - a function to get node at a given position
 * @head: linked-list
 * @index: position to find
 *
 * Return: the node of that position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (head);

	while (i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
