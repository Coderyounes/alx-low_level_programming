#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Description: Identify if the number is positive or negative or zero
 *
 * Return: 0 always Success
 *
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);

	}

	return (0);
}
