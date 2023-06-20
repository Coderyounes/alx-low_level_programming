#include "main.h"

/**
 * _abs - function name
 *
 * Description: function to calculate the absolut integer
 *
 * @n: integer to check
 *
 * Return: 0 always Success
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
