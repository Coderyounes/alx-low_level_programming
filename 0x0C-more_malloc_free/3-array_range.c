#include "main.h"

/**
 * array_range - create array of integer using malloc
 *
 * @min: minimum range of array
 *
 * @max: maximum range of array
 *
 * Return: array pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
	{
		return (NULL);
	}
	i = 0;

	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}
