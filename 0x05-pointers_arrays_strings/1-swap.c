#include "main.h"

/**
 * swap_int - function declaration
 *
 * Description: function to swap values of a & b
 *
 * @a: first integer
 *
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
