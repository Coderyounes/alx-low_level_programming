#include "lists.h"


/**
 * sum_dlistint - function to calculate sum of nodes value
 *
 * @head: pointer to head of list
 *
 * Return: 0 if the list is empty, total sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
