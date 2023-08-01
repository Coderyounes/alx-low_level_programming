#include "lists.h"

/**
 * get_size - Function to get list size
 *
 * @head: linked list
 *
 * Return: number of nodes in the list
 */

int get_size(listint_t *head)
{
	unsigned int count = 0;
	listint_t *temp;

	temp = head;

	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
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
	unsigned int size = get_size(*head);
	listint_t *newnode;
	listint_t *temp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	temp = *head;

	if (idx > size)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		for (i = 0; i < idx - 1 && temp != NULL ; i++)
		{
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}

	return (*head);

}
