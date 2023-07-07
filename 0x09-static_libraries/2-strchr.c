#include "main.h"

/**
 * _strchr - function name
 *
 * @s: pointer to string
 *
 * @c: pointer to characters
 *
 * Return: either S or Null Characters
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}

	} while (*s++);

	if (*s == c)
		return (s);
	return ('\0');
}
