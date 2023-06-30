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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10 + '0'));
}
