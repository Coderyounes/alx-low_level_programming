#include "lists.h"

/**
 * add_nodeint - Function add node at beginning of the list
 *
 * @head: pointer to pointer to First node
 *
 * @n: integer to add in first of the list
 *
 * Return: address of the New Element or Null if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	
	if (*head == NULL)
		NewNode->next = NULL;
	else
		NewNode->next = *head;

	NewNode->n = n;
	*head = NewNode;

	return (*head);
}
