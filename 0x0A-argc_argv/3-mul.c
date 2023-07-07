#include <stdio.h>
#include  <stdlib.h>

/**
 * main - entrypoint
 *
 * Description: calculate the multiplies of 2 numbers
 *
 * @argc: argument number
 *
 * @argv: array of string/pointer
 *
 * Return: 1 if Error , otherwise 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, total;

	if (argc == 3)
	{
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	total = n1 * n2;

	printf("%d\n", total);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);


}
