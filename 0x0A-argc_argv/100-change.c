#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- entry point
 *
 * @argc: argument count
 *
 * @argv: argument string/vector
 *
 * Return: 1 in Error case , 0 mean Succes
 */

int main(int argc, char *argv[])
{
	int cents;
	int ncoin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (ncoin = 0; cents > 0; ncoin++)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;

	}
	printf("%d\n", ncoin);
	return (0);

}
