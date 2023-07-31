#include "lists.h"

/**
 * listint_len - function return number of nodes
 *
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
