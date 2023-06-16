#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print alphbet using ascii & forloop
 *
 * Return: 0 always Success
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar ('\n');

	return (0);
}
