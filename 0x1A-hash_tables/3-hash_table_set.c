#include "hash_tables.h"

/**
 * key_index - get index for buckets
 *
 * @key: the key to hash
 * @size: size of the hash table
 *
 * Return: index
 */
/*
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
+++++++++++++++++++++++++++++
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

*/
hash_node_t *create_node(const char *key, const char *value)
{
    hash_node_t *new_ndoe = malloc(sizeof(hash_node_t));
    if (!new_ndoe)
        return NULL;

    new_ndoe->key = strdup(key);
    new_ndoe->value = strdup(value);

    return (new_ndoe);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node = NULL;
    unsigned long int index;
    const char *empty = "";
    if (!key || !key || strcmp(key, empty) == 0 || !value)
    {
        return 0;
    }

    new_node = create_node(key, value);
    if (!new_node)
    {
        return 0;
    }

    index = key_index((const unsigned char *)key, ht->size);

    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_node;
    }
    else
    {
        new_node->next = ht->array[index];

        ht->array[index] = new_node;
    }

    return (1);
}
