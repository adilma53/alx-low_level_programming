#include "hash_tables.h"
/**
 * shash_table_create - free hash table
 * @ht: The hash table to free
 *
 * Return: Nothing!
 */
shash_node_t *create_s_node(const char *key, const char *value);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

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
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/**
 * create_s_node - create node for table
 *
 * @key: key of the node
 * @value: value of the node
 *
 * Return: new node
 */
shash_node_t *create_s_node(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/**
 * shash_table_set - add node at index of hash table
 *
 * @ht: hash table
 * @key: the key to hash
 * @value: of the node
 *
 * Return: 1 if succeed 0 if fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current = NULL;
	unsigned long int index;
	shash_node_t *shead_copy = NULL, *prev, *new_node = NULL;

	if (!ht || !key || strcmp(key, "") == 0 || *key == '\0' || !value)
		return 0;
	new_node = create_s_node(key, value);

	if (!new_node)
		return 0;
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
	{
		ht->array[index] = new_node;
		if (ht->shead == NULL)
		{
			ht->shead = new_node;
			ht->stail = new_node;
			return (1);
		}
		shead_copy = ht->shead;
		prev = NULL;
		while (shead_copy != NULL && key[0] > shead_copy->key[0])
		{
			prev = shead_copy;
			shead_copy = shead_copy->snext;
		}
		if (shead_copy == NULL)
		{
			prev->snext = new_node;
			new_node->sprev = prev;
			ht->stail = new_node;
		}
		else if (prev == NULL)
		{
			new_node->snext = shead_copy;
			shead_copy->sprev = new_node;
			ht->shead = new_node;
		}
		else
		{
			prev->snext = new_node;
			new_node->sprev = prev;
			new_node->snext = shead_copy;
			shead_copy->sprev = new_node;
		}
		return 1;
	}
	else if (strcmp(current->key, key) == 0)
	{
		free(current->value);
		current->value = strdup(value);

		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return 1;
	}
	else
	{
		while (current->next != NULL)
		{
			if (strcmp(current->next->key, key) == 0)
			{
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return 0; /* key already exists in collision chain */
			}
			current = current->next;
		}
		current->next = new_node;
		new_node->next = NULL;
	}
	return 1;
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/**
 * shash_table_print - print a hash table
 * @ht: The hash table to prints
 *
 * Return: Nothing!
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
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/**
 * shash_table_print_rev - print a hash table
 * @ht: The hash table to prints
 *
 * Return: Nothing!
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
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/**
 * shash_table_delete - free hash table
 * @ht: The hash table to free
 *
 * Return: Nothing!
 */
void shash_table_delete(shash_table_t *ht)
{

	shash_node_t *current = NULL;
	shash_node_t *temp = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		current = ht->array[i];

		while (current)
		{
			temp = current;
			free(temp->key);
			free(temp->value);
			free(temp);

			current = current->next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
