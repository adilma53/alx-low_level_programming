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
/*
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;


typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *current = NULL;
    shash_node_t *new_node = NULL;

    shash_node_t *shead_copy = NULL;

    unsigned long int index;

    if (!ht || !key || strcmp(key, "") == 0 || *key == '\0' || !value)
    {
        return (0);
    }

    new_node = create_s_node(key, value);
    if (!new_node)
    {
        return (0);
    }
    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    if (current == NULL)
    {
        ht->array[index] = new_node;
        /* linking sorted list */
        shead_copy = ht->shead;

        if (!shead_copy)
        {
            shead_copy = new_node;
            ht->stail = new_node;

            return (1);
        }
        while (shead_copy && key[0] > shead_copy->key[0])
        {
            shead_copy = shead_copy->snext;
        }
        /* if we reached the end of the list*/
        if (!shead_copy->snext)
        {
            new_node->sprev = shead_copy;
            shead_copy->snext = new_node;

            ht->stail = new_node;

            return (1);
        }
        /* if we suppose to add at head*/
        if (!shead_copy->sprev && key[0] < shead_copy->key[0])
        {
            new_node->snext = shead_copy;
            shead_copy->sprev = new_node;

            ht->shead = new_node;

            return (1);
        }

        new_node->snext = shead_copy;
        new_node->sprev = shead_copy->sprev;

        shead_copy->sprev->snext = new_node;
        shead_copy->sprev = new_node;

        return (1);
    }
    else if (strcmp(current->key, key) == 0)
    {
        free(current->value);
        current->value = strdup(value);

        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (1);
    }
    else
    {
        new_node->next = ht->array[index];

        /* linking nodes*/

        new_node->sprev = current->sprev;
        new_node->snext = current->snext;

        current->sprev->next = new_node;
        current->snext->sprev = new_node;

        current->sprev = NULL;
        current->snext = NULL;

        ht->array[index] = new_node;
    }
    return (1);
}