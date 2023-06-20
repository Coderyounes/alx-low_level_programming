#include "main.h"

/**
 * times_table - function name
 *
 * Description: function print 9 times table
 *
 * Return: nothing to return it's void
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar(48);
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + 48);
				_putchar(k % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
