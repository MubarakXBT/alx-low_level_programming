#include "hash_tables.h"

/**
 * hash_table_create - A function to create a Hash table
 * @size: size of the hash table
 *
 * Return: NULL if fail or the created table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
