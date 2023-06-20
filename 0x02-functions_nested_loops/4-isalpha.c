#include "main.h"

/**
 * _isalpha - function name
 *
 * Description: function to check characters if they alphabet or not
 *
 * @c: charachter to check
 *
 * Return: nothing to return it's a void
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
