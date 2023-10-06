#include "hash_tables.h"

/**
 * hash_table_get - Function to get value of key
 * @ht: hashtable
 * @key: string to hash
 * Return: value of the key or NULL if key not in the table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, hash;
	hash_node_t *temp;

	hash = key_index((const unsigned char *)key, ht->size);
	index = hash % ht->size;

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
