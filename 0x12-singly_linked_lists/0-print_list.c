#include "lists.h"

/**
 * print_list - function to print all node within a single linked list
 *
 * @h: pointer to a struct
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);

		count++;

		h = h->next;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (count);
}
