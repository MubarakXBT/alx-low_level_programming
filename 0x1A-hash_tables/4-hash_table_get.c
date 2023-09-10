#include "hash_tables.h"
/**
 * hash_table_get - A function to look up a key in a table
 * @ht: the hash map/table
 * @key: the key to lookup
 *
 * Return: the value stored at the key location
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	if (!key || !ht)
		return (NULL);

	if (index >= ht->size)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			return (ht->array[index]->value);
		}
	}

	return (NULL);
}
