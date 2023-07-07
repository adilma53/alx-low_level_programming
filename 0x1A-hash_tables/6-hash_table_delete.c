#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: The hash table to prints
 *
 * Return: Nothing!
 */

void hash_table_delete(hash_table_t *ht)
{
    if (!ht)
        return;

    while (i < ht->size)
    {
        current = ht->array[i];

        while (current)
        {

            comma = 1;
            printf("'%s': '%s'", current->key, current->value);

            current = current->next;
        }
        i++;
    }
}