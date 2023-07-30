#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - A function that prints nodes of a linked list
 * @h: nodes in a linked list;
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
			current = current->next;
			i++;
		}
		else
		{
			printf("[0] (nil)\n");
			current = current->next;
			i++;
		}
	}

	return (i);
}
