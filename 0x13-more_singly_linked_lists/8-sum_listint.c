#include "lists.h"

/**
 * sum_listint - function to traverse linked list & sum all n
 *
 * @head: pointer to the first node
 *
 * Return: 0 if it fail , total if Success
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
