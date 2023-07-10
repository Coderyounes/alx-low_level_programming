#include "main.h"

/**
 * create_array - function to Allocate Memory for Array
 *
 * @size: pointer to the size of the array
 *
 * @c: pointer to char
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (!size)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
