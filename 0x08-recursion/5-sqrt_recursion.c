#include "main.h"

/**
 * _sqrt_recursion - function name
 *
 * Description:  calculate sqrt of a number
 *
 * @n: integer
 *
 * Return: to helper_sqrt function
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
		return (n);

	return (helper_sqrt(n, 1));
}

/**
 * helper_sqrt - function name
 *
 * Description: help the intial sqrt function
 *
 * @n: integer to calculate sqrt
 *
 * @i: start base
 *
 * Return: final result
 */

int helper_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}

	return (helper_sqrt(n, i + 1));
}
