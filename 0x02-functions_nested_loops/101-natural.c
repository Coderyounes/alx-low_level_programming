#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: calculate  te sum all accept devision in 3 or 5
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int i, total;

	total = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
		{
			total += i;
		}
	}
	printf("%d\n", total);
	return (0);
}
