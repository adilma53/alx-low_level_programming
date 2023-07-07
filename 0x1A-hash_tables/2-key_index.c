#include "hash_tables.h"

/**
 * hash_djb2 - djb2 hashing algorithm.
 *
 * @str: value to hash
 *
 * Return: returns the hash index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
