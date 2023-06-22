#include "main.h"

/**
 * print_line - function name
 *
 * Description: print underscore n times
 *
 * @n: number of times
 *
 * Return: nothing it's void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
