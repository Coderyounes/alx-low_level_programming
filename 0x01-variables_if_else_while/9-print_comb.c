#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print digit with some spacer
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 0)
		{
			putchar(44);
			putchar(32);
		}
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
