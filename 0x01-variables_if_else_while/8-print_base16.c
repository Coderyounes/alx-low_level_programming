#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all numbers of base 16
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 0; i <= 5; i++)
	{
		putchar(i + 'a');
	}
	putchar('\n');

	return (0);
}
