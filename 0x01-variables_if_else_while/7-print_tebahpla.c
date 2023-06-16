#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in reverse way
 *
 * Return: 0 Always Success
 *
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
