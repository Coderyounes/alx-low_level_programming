#include "main.h"

/**
 * clear_bit - function clear value of a bit based on index
 *
 * @n: pointer to integer
 *
 * @index: bit index
 *
 * Return: -1 if fail, otherwise 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
