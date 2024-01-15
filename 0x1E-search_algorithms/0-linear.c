#include "search_algos.h"

/**
 * linear_search - Function Perform a linear search
 * @array: pointer to an array of integer
 * @size: size of the array
 * @value: the value to search
 * Return: index of the value or -1 if not present
 * Description:
 * linear function iterate the entire array until it find the\
 * the Value then return the index\
 * if it failt to find it retunr -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	unsigned int index;

	if (!array && !value)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			break;
		}
		else
		{
			index = -1;
		}
	}
	return (index);
}
