#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdio.h>
#include <stdlib.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: string, The key is unique value in the hashtable
 * @value: the value corresponding to a key
 * @next: pointer to next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table DSA
 * @size: the size of the array
 * @array: An array of size @size
 * Each cell of this array is head of linked listed,
 * Because we want to use chaining for collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES */
