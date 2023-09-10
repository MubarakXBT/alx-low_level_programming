#include "hash_tables.h"
/**
 *
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	if (!key || !ht)
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
