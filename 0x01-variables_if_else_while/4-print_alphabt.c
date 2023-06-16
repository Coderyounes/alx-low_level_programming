#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printf all aplhabet except q & e using for loop & if statement
 *
 * Return: 0 Always Success
 *
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
