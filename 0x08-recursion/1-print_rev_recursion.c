#include <stdio.h>

/**
 * _print_rev_recursion - function name
 *
 * Description: Puts rev function using recursion
 *
 * @s: pointer to string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	_print_rev_recursion(s + 1);
	putchar(*s);
}
