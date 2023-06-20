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

	res = _abs(n % 10);
	_putchar('0' + res);
	return (res);
}

/**
 * _abs - function name
 *
 * Description: auxiliare for the first function to get the abs value
 *
 * @n: integer to get the abs
 *
 * Return: 0 Always Success
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
