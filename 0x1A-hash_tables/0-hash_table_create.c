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
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->array = malloc(size);
	if (table->array == NULL)
		return (NULL);

	return (table);
}
