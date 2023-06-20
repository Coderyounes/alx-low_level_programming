#include "main.h"

/**
 * print_alphabet_x10 - function name
 *
 * Description: function print alphabets via putchar 10 times
 *
 * Return: nothing to return it's a void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		putchar('\n');
	}
}
