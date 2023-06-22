#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates the largest prime factor of a given number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
			num = num / i;
	}

	printf("%ld\n", num);

	return (0);
}

