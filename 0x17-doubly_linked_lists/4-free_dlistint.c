#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		head = current;
		current = current->next;
		free(head);
	}
}
