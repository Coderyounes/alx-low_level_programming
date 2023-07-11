#include "main.h"

/**
 * alloc_grid - function name
 *
 * Description:
 *
 * @width: array width
 *
 * @height: array height
 *
 * Return: nothing it's void
 */

int **alloc_grid(int width, int height)
{
	int **block = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	block = malloc(height * sizeof(int *));

	if (block == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		block[i] = malloc(width * sizeof(int));
		if (block[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(block[j]);
			free(block);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			block[i][j] = 0;
	}
	return (block);
}
