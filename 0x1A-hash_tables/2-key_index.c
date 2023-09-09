#include "hash_tables.h"
/**
 * key_index - a function to calculate the index of key
 * @key: the key of the pair
 * @size: size of the hash table
 *
 * Return: The index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index = 0;

	index = hash_djb2(key);
	return ((index % size));
}
