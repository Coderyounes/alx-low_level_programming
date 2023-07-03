#include "main.h"

/**
 * _memset - function name
 *
 * @s: pointer to string
 *
 * @b: charachter to fill with
 *
 * @n: number of bytes to fill
 *
 * Return: new String
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
