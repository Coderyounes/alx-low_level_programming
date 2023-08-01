#include "lists.h"

/**
 * insert_nodeint_at_index - Function insert node at certain position
 *
 * @head: first node of the liked list
 *
 * @idx: position of certain node
 *
 * @n: integer data to add in node
 *
 * Return: New nodes address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	temp = *head;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
		for (i = 0; i < idx && temp != NULL ; i++)
		{
			if (i == idx - 1)
			{
				newnode->next = temp->next;
				temp->next = newnode;
				return (newnode);
			}
			else
				temp = temp->next;
		}

	return (NULL);

}
