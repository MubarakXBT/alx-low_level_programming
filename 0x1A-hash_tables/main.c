#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    int idx;
    hash_table_t *ht;
    const char *str = "betty";

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "betty");
    idx = hash_djb2((const unsigned char *)str) % 1024;
    printf("%s\n", ht->array[idx]->value);
    return (EXIT_SUCCESS);
}