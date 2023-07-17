#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Program print the name of the file it was compiled from
 *
 * Return: 0 Always Success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
