#include <stdio.h>
#include  <stdlib.h>
#include <ctype.h>

/**
 * main - entrypoint
 *
 * Description: calculate the sum  of all argument
 *
 * @argc: argument number
 *
 * @argv: array of string/pointer
 *
 * Return: 1 if Error , otherwise 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int total;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);

	return (0);
}
