#include "hash_tables.h"
/**
 * hash_table_delete - free hash table
 * @ht: The hash table to free
 *
 * Return: Nothing!
 */

shash_table_t *shash_table_create(unsigned long int size)
{
    unsigned int i;
    shash_table_t *table = malloc(sizeof(shash_table_t));

    if (!table)
        return (NULL);

    table->size = size;

    table->array = malloc(sizeof(shash_node_t *) * size);
    if (!table->array)
        return (NULL);

    for (i = 0; i < size; i++)
        table->array[i] = NULL;

    return (table);
}