#include "lists.h"

/**
 * add_node - function to add node at beginning of linked list
 *
 * @head: pointer to pointer point to First node or empty
 *
 * @str: pointer to string
 *
 * Return: New list head
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t l_str;
	list_t *N_node;

	if (str == NULL)
		l_str = 0;

	l_str = strlen(str);

	N_node = malloc(sizeof(list_t));
	if (N_node == NULL)
		return (NULL);

	if (*head == NULL)
		N_node->next = NULL;
	else
		N_node->next = *head;

			N_node->str = strdup(str);
			N_node->len = l_str;
			*head = N_node;

			return (*head);
}
