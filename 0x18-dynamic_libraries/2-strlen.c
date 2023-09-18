#include "main.h"

/**
 * _strlen - function declaration
 *
 * Description: print the length of a string
 *
 * @s: string
 *
 * Return: the total length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}
