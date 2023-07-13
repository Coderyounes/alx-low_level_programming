#include "main.h"

/**
 * malloc_checked - function check if the memory is allocated or not
 *
 * @b: bytes of memory to allocate
 *
 * Return: it's a void
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}

	return (p);
}
