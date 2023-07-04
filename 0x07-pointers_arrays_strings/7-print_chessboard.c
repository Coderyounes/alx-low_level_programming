#include "main.h"
/**
 * print_chessboard - function to print 2D array in Order
 *
 * @a: pointer to array
 *
 * Return: nothing it's a void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		if (j == 8)
		{
			_putchar('\n');
		}
	}
}
