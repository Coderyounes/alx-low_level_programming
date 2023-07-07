#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all the argument
 *
 * @argc: number of argument
 *
 * @argv: array of string/pointers
 *
 * Return: 0 Always Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
