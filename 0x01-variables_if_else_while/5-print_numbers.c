#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print digit using putchar
 *
 * Return: 0 Always success
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar ('\n');

	return (0);
}
