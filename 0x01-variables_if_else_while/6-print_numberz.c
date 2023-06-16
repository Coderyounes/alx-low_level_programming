#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print number using putchar
 *
 * Return: 0 Always Succes
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
