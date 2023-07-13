#include "main.h"

/**
 * _calloc - function to  initialize the allocated memory to 0
 *
 * @nmemb: elements number of the array
 *
 * @size: size in byte of each element
 *
 * Return: it's void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p != NULL)
	{
		memset(p, 0, nmemb * size);
	}

	return (p);


}
