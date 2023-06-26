#include "main.h"

/**
 * print_array - function name
 *
 * Description: print array element base on n
 *
 * @a: array
 *
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	if(n  < 0)
	{
		return;
	}


	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
