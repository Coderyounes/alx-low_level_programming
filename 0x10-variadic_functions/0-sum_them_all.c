#include "variadic_functions.h"

/**
 * sum_them_all - variadic function declaration
 *
 * Description: function sum all integer in arguments
 *
 * @n: number of argument
 *
 * Return: Total of sum calculation
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i;
	int sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
