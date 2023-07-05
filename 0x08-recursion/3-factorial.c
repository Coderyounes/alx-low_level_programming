#include "main.h"

/**
 * factorial - function name
 *
 * Description: function calculate factorial using recursion
 *
 * @n: integer
 *
 * Return: factorial result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
