#include "main.h"

/**
 * _atoi - function name
 *
 * Description: convert string to integer
 *
 * @s: string
 *
 * Return: integer value
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
		s++;
	}

	return (n * sign);
}

