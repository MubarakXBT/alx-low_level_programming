#include "hash_tables.h"
/**
 * hash_table_print - A function to print hey and pair of an hash map/table
 * @ht: the hash table
 *
 * Return: Void
*/
void hash_table_print(const hash_table_t *ht)
{
	int size = ht->size;
	int i, timing = 0;

	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (timing == 0)
			{
				printf("{");
			}
			if (timing >= 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			timing++;
		}
	}
	if (timing == 0)
	{
		printf("{");
	}
	puts("}");
}
