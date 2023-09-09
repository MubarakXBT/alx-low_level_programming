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
	int index;

	keypair = (hash_node_t *) malloc(sizeof(hash_node_t *));
	if (keypair == NULL)
		return (0);

	if (!key || !ht)
		return (0);

	keypair->key = strdup(key);
	keypair->value = strdup(value);
	keypair->next = NULL;

	index = (hash_djb2((const unsigned char *)key)) % ht->size;

	if (ht->array[index] != NULL)
	{
		return (0);
	}

	ht->array[index] = keypair;

	return (1);
}
