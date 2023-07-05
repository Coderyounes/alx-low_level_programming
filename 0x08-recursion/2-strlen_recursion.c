#include "main.h"

/**
 * _strlen_recursion - function name
 *
 * Description: calculate the string length via recursion
 *
 * @s: pointer to string
 *
 * Return: 1 for characters & 0 for null
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
