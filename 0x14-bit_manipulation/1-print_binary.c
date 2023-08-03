#include "main.h"

/**
 * print_binary - function converte decimal to binary
 *
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	int i, bit, zeros, size;

	size = sizeof(n) * 8;
	zeros = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (i = size - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit)
			zeros = 0;
		if (!zeros)
			putchar('0' + bit);
	}
}
