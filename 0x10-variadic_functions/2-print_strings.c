#include "variadic_functions.h"

/**
 * print_strings - Variadic Function Declaration
 *
 * @separator: char to separate each string from another
 *
 * @n: number of argument
 *
 * Return: nothing it's a void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	char *str;
	unsigned int i;

	va_start(strings, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(strings, char*);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
			printf("(nil)");
			}
			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
	printf("\n");

	va_end(strings);
}
