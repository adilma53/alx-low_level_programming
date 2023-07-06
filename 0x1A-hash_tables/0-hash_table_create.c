#include "hash_tables.h"

/**
 * hash_table_create - create hash table with specific size
 *
 * @size: size of the hash table
 *
 * Return: the hash table created or NULL if malloc failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
