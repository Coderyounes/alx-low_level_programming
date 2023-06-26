#include "main.h"

/**
 * print_rev - function declaration
 *
 * Description: function print in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	while (count--)
	{
		_putchar(*s + count);
	}
	_putchar('\n');
}
