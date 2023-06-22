#include "main.h"

/**
 * more_numbers - function name
 *
 * Description: print numbers from 0 to 14 using putchar
 *
 * Return: nothing void
 */


void more_numbers(void)
{
	int i;
	int line;

	for (line = 0; line <= 9; line++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar('0' + i / 10);
		}
		_putchar('0' + i % 10);
	}
	_putchar('\n');
	}
}
