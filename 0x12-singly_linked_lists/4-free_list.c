#include "lists.h"

/**
 * free_list - free single linked list
 *
 * @head: pointer to the first node
 *
 * Return: It's void
 */

void free_list(list_t *head)
{
	list_t *node;

	node = head;


	while (node != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
		node = head;
	}
}
