#include "function_pointers.h"

/**
 * array_iterator - function iterate over the array
 *
 * @array: pointer to array of integers
 *
 * @size: size we want to iterat to
 *
 * @action: pointer to function
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size ; i++)
		{
			action(array[i]);
		}
}
