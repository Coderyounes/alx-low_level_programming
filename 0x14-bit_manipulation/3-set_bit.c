#include "main.h"

/**
 * set_bit - function value of a bit based on index
 *
 * @n: pointer to integer
 *
 * @index: bit index
 *
 * Return: -1 if fail, otherwise value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bits;

	if (index >= 32)
	{
		return (-1);
	}

	bits = *n |= (1 << index);

	return (bits);
}
