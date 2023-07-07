#include "main.h"

/**
 * _islower - function name
 *
 * Description: function to check if character is lowercase
 *
 * @c: character to check
 *
 * Return: nothing to return it's void
 */


int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
