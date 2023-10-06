#include "hash_tables.h"
/**
 * hash_table_set - Function insert new node to table
 * handle Collision with single linked list
 * @ht: hash table
 * @key: string to hash
 * @value: value Correspendnt with the key
 * Return: 1 if SUCCESS , 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = hash_calc(key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * hash_calc - helper func to not touch djb2 code
 * @key: string to hash
 * @size: table size
 * Return: Index
 */
unsigned long int hash_calc(const char *key, unsigned long int size)
{
	unsigned long int hash, idx;

	hash = key_index((const unsigned char *)key, size);
	idx = hash % size;

	return (idx);
}
