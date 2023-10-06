#include "hash_tables.h"

/**
 * hash_table_print - function print element of hashtable in formated way
 * @ht: hashtable
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int track = 1;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (!track)
			{
				printf(", ");
			}
			printf("'%s':'%s'", temp->key, temp->value);
			track = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}
