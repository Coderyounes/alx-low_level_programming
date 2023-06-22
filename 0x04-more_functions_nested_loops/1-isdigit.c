#include "main.h"

/**
 * _isdigit - function name/declaration
 *
 * Description: function check if the chunk of data is 0 or 9
 *
 * @c: character or digit to check
 *
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
