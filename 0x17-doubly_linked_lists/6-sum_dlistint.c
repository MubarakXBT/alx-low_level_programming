#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - sums all data in nodes of a list
 * @head: the linked-list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
