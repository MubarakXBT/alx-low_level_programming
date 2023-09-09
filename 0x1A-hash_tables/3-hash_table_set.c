#include "hash_tables.h"
/**
 * hash_table_set - Insert a key-value pair into the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *keypair;
	int i, index;

	keypair = (hash_node_t *) malloc(sizeof(hash_node_t *));
	if (keypair == NULL)
		return (0);

	if (!key || !ht)
		return (0);

	keypair->key = strdup(key);
	if (keypair->key == NULL)
	{
		free(keypair);
		return (0);
	}
	keypair->next = NULL;

	index = hash_djb2((const unsigned char *)key) % ht->size;
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	keypair->value = strdup(value);
	keypair->next = ht->array[index];
	ht->array[index] = keypair;

	return (1);
}
