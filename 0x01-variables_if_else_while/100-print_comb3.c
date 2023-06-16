#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print Combinations of two digits
 *
 * Return: 0 Always Success
 *
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
