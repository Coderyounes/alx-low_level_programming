#include "main.h"

/**
 * print_last_digit - function name
 *
 * Description: print the last digit of every integer
 *
 * @n: integer to work with
 *
 * Return: the last digit abs
 *
 */

int print_last_digit(int n)
{
	int res;

	res = abs(n % 10);
	_putchar('0' + res);
	return (res);
}
