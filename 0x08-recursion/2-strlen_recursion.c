#include "main.h"

/**
 * _strlen_recursion - function name
 *
 * Description: calculate the string length via recursion
 *
 * @s: pointer to string
 *
 * Return: i the length value
 */

int _strlen_recursion(char *s)
{
	static int i;

	if (*s == '\0')
	{
		return (i);
	}
	else
		i++;
	return (_strlen_renursion(s + 1));
}
