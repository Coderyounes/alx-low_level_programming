#include "variadic_functions.h"

/**
 * p_char - function to print char
 * @c: char to print
 * @separator: empty string until finish
 */

void p_char(int c, char *separator)
{
	printf("%s%c", separator, c);
}

/**
 * p_integer - function to print integer
 * @i: integer to print
 * @separator: empty string until finish
 */

void p_integer(int i, char *separator)
{
	printf("%s%d", separator, i);
}

/**
 * p_float - function to print floit
 * @f: double type to print
 * @separator: empty string until finish
 */

void p_float(double f, char *separator)
{
	printf("%s%f", separator, f);
}

/**
 * p_str - function to print string
 * @s:  pointer to string to print
 * @separator: empty string until finish
 */

void p_str(char *s, char *separator)
{
	if (!s)
		s = ("(nil)");
	printf("%s%s", separator, s);
}


/**
 * print_all - function to print all data type
 *
 * @format: identifier of each data type
 */

void print_all(const char * const format, ...)
{
	va_list args;

	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);


	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				p_char(va_arg(args, int), separator);
				break;
			case 'i':
				p_integer(va_arg(args, int), separator);
				break;
			case 'f':
				p_float(va_arg(args, double), separator);
				break;
			case 's':
				p_str(va_arg(args, char *), separator);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;

	}

	va_end(args);
	printf("\n");

}
