#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node based on index
 * @head: pointer to to First node
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (!head || !*head)
		return (-1);

	temp = get_dnodeint_at_index(*head, index);
	if (!temp)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;
	else
		*head = temp->next;

	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: address of the nth node, or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return (head);
}
