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
	int l, h;

	for (l = 0; str[l] != '\0'; l++)
		;

	h = l / 2;

	while (str[h] != '\0')
	{
		_putchar(*(str + h));
		h++;
	}
	_putchar('\n');
}
