#include "lists.h"

/**
 * dlistint_len - function show the length of the list
 *
 * @h: pointer to the head of the list
 *
 * Return: 0 if it Fail , otherwise number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
