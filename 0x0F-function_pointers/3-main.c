#include "3-calc.h"

/**
 * main - entrypoint for a calculation
 *
 * @argc: number of argument
 *
 * @argv: array of argument
 *
 * Return: 0 Always Success
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*ptr_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	ptr_func = get_op_func(argv[2]);

	if (ptr_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = ptr_func(a, b);

	printf("%d\n", result);

	return (0);
}
