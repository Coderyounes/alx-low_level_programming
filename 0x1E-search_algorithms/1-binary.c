#include "search_algos.h"

/**
 * binary_search - function search for a value using divide & conquer
 * @array: sorted array
 * @size: size of the array
 * @value: data to search for
 * Return: the index if the search fail return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, low = 0, high = size - 1;

	if (!array && !value)
	{
		return (-1);
	}

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}

/**
 * print_array - function print an array
 * @array: pointer to array
 * @low: beginning Index
 * @high: end index
 */

void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
	}
	printf("\n");
}
