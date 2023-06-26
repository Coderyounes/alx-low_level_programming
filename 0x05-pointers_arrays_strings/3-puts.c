#include "main.h"

/**
 * _puts - function declaration
 *
 * Description: function print a string
 *
 * @str: String we want to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
