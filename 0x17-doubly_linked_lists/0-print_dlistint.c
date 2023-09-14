#include "lists.h"

/**
 * print_dlistint - function print the node & length of list
 *
 * @h: head of the list
 *
 * Return: NULL if fail , otherwise numbre of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
