#include <stdio.h>
/**
 * main - Entrypoint
 *
 * Description: Simple C code show sizeof each datatype
 *
 * Return: 0 always success
 */

int main(void)
{
	printf("Size of a char: %s byte(s)\n", sizeof(char));
	printf("Size of an int: %s byte(s)\n", sizeof(int));
	printf("Size of a long int: %s byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %s byte(s)\n", sizeof(long long int));
	printf("Size of a float: %s byte(s)\n", sizeof(float));
	return (0);
}
