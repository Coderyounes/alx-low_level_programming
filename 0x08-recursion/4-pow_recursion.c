#include "main.h"

/**
 * _pow_recursion - function name
 *
 * Description: calculate the power of x raised to y
 *
 * @x: integer
 *
 * @y: power raised to
 *
 * Return: -1 if y less than 0 , 1 if y zero , else power of integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		y--;
	return (x * _pow_recursion(x, y));
}
