#include "main.h"

/**
 * print_square - function name
 *
 * Description: function print square 'size' times in 'size' lines
 *
 * @size: line & times print
 *
 * Return: nothing it's void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
