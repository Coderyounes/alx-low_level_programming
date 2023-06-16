#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print alphabet Lower & Upper case using for loop
 *
 * Return: 0 Always success
 *
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
