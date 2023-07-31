#include "lists.h"

/**
 * pop_listint - Function to delete First node of the list
 *
 * @head: pointer to pointer to First node
 *
 * Return: Deleted Element
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int fnode;
	
	if (*head == NULL || head == NULL)
		return (0);
	
	tmp = *head;
	fnode = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	
	return (fnode);
}
