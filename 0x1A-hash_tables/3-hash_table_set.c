#include "hash_tables.h"

/**
 * create_node - create node for table
 *
 * @key: key of the node
 * @value: value of the node
 *
 * Return: new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_ndoe = malloc(sizeof(hash_node_t));

	if (!new_ndoe)
		return (NULL);

	new_ndoe->key = strdup(key);
	new_ndoe->value = strdup(value);

	return (new_ndoe);
}
/**
 * hash_table_set - add node at index of hash table
 *
 * @ht: hash table
 * @key: the key to hash
 * @value: of the node
 *
 * Return: 1 if succeed 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current = NULL;
	hash_node_t *new_node = NULL;
	unsigned long int index;
	const char *empty = "";

	if (!key || !key || strcmp(key, empty) == 0 || *key == '\0' || !value)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else if (current != NULL && strcmp(current->key, key) == 0)
	{
		free(current->value);
		current->value = strdup(value);

		return (1);
	}
	else
	{
		new_node = create_node(key, value);
		if (!new_node)
		{
			return (0);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
