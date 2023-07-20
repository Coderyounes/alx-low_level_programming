#include "variadic_functions.h"

/**
 * print_numbers - Variadic function print numbers
 *
 * @separator: pointer to char separator
 *
 * @n: the number of the argument expected
 *
 * Return: nothing it's void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i;
	int num;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);

	}
	printf("\n");

	va_end(numbers);
}
