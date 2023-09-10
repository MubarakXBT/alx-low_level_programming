#include "hash_tables.h"
/**
 * hash_table_print - A function to print hey and pair of an hash map/table
 * @ht: the hash table
 *
 * Return: Void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int size = ht->size;
	int i, timing = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (timing == 1)
			{
				printf(", ");
			}
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
		}
	}
	puts("}");
}
