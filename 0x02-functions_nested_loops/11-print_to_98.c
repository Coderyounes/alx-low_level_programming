#include "main.h"

/**
 * print_to_98 - function name
 *
 * Description: function to reset any integer to 98
 *
 * @n: interger
 *
 * Return: void nothing to return
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	printf("%d\n", n);
}
