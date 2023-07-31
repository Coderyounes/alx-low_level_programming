#include "lists.h"

/**
 * get_nodeint_at_index - Function to Get node via index
 *
 * @head: pointer to First node
 *
 * @index: index for the node
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
