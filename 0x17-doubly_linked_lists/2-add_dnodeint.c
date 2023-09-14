#include "lists.h"

/**
 * add_dnodeint - function add node to Doubly linked list
 *
 * @head: pointer to pointer to head of the list
 *
 * @n: integer to add in node
 *
 * Return: if fail 0, or New head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (0);
	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
	}
	else
	{
		newnode->next = *head;
	}
	newnode->n = n;
	*head = newnode;

	return (*head);
}
