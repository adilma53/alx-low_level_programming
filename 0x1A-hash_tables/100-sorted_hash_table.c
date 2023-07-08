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
	shash_node_t *new, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}

	return (1);
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
