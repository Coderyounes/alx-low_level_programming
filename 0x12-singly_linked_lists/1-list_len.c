#include "lists.h"

/**
 * list_len - function to count the number of nodes within a single linked list
 *
 * @h: pointer to a struct
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			exit(0);
		else
		count++;
		h = h->next;
	}
	return (count);
}
