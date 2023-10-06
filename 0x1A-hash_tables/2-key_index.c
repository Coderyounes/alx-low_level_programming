#include "hash_tables.h"

/**
 * key_index - function return index
 * @key: string to hash
 * @size: table size
 * Return: index or NULL if it fail
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	if (!key || !size || size <= 0)
	{
		return ((unsigned long int)(NULL));
	}

	hash = hash_djb2(key);

	index = hash % size;

	return (index);
}
