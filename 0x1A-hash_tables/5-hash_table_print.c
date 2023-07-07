#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: The hash table to prints
 *
 * Return: Nothing!
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0;

	if (!ht)
	{
		return;
	}

	putchar('{');

	while (i < ht->size)
	{
		current = ht->array[i];

		while (current)
		{
			if (i > 1)
			{
				putchar(',');
				putchar(' ');
			}

			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
		}
		i++;
	}

	putchar('}');
	putchar('\n');
}
