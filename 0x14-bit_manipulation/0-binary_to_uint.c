#include "main.h"

/**
 * binary_to_uint - function to convert binary string to decimal
 *
 * @b: pointer to string
 *
 * Return: 0 if it failed, or the integer value
 */

unsigned int binary_to_uint(const char *b)
{
	int i, num;
	int base = 2;
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			num = 0;
		else if (b[i] == '1')
			num = 1;
		else
			return (0);

		total = total * base + num;
	}

	return (total);
}
