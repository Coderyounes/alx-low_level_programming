#include "main.h"

/**
 * print_alphabet - function name
 *
 * Description: function print alphabets via putchar
 *
 * Return: nothing to return it's a void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
