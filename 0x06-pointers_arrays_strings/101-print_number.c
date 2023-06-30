#include "main.h"

/**
 * print_number - function name
 *
 * Description: function print integer using recursive
 *
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;

	if (i / 10 > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10 + '0'));
}
