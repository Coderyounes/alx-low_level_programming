#include "main.h"

/**
 * _isupper - function name
 *
 * Description: function check if c in uppercase
 *
 * @c: character to check
 *
 * Return: 1 if it uppercase , 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		return (0);
	}
	else
		return (1);
}
