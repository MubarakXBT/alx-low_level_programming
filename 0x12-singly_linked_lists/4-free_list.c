#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free allocated memory
 * @head: head of linked_list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}

