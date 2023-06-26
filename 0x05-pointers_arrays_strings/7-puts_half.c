#include "main.h"

/**
 * puts_half - function name
 *
 * Description: print the last half of string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i = 0;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (len / 2) + 1; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
