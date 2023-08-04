#include "main.h"

/**
 * flip_bits - calculate number of flips
 *
 * @n: integer
 *
 * @m: integer
 *
 * Return: total flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val_xor = n ^ m;
	unsigned int flips = 0;

	for (; val_xor; flips++)
	{
		val_xor &= val_xor - 1;
	}

	return (flips);
}
