#include "lists.h"

/**
 * get_dnodeint_at_index - function to Get node value of certain index
 *
 * @head: pointer to first node
 *
 * @index: index of the node
 *
 * Return: the data in the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head->next != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
