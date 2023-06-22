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
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
