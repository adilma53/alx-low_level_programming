
#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the hash table
 *
 * Return: Pointer to the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return NULL;

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return NULL;
	}

	memset(ht->array, 0, sizeof(shash_node_t *) * size);
	ht->shead = NULL;
	ht->stail = NULL;

	return ht;
}

/**
 * shash_table_set - Insert a key-value pair into the sorted hash table
 * @ht: The sorted hash table
 * @key: The key string
 * @value: The value string
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return 0;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return 1;
		}
		tmp = tmp->next;
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return 0;

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = node;
		ht->shead = node;
		if (ht->stail == NULL)
			ht->stail = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(key, tmp->snext->key) >= 0)
			tmp = tmp->snext;
		node->sprev = tmp;
		node->snext = tmp->snext;
		if (tmp->snext != NULL)
			tmp->snext->sprev = node;
		tmp->snext = node;
		if (node->snext == NULL)
			ht->stail = node;
	}

	return 1;
}

/**
 * shash_table_get - Retrieve the value associated with a key from the sorted hash table
 * @ht: The sorted hash table
 * @key: The key string
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return NULL;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;
		node = node->next;
	}

	return NULL;
}

/**
 * shash_table_print - Print the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (first)
			first = 0;
		else
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (first)
			first = 0;
		else
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}
