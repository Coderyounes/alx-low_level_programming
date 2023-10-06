#include "hash_tables.h"

/**
 * hash_table_print - function print element of hashtable in formated way
 * @ht: hashtable
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *c = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", c, temp->key, temp->value);
			c = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
