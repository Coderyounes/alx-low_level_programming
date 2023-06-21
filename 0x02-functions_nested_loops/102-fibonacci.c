#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: code print the first 50 fibonacci numbers
 *
 * Return: 0 Always Succes
 */

int main(void)
{
	int nums[50];
	int i;

	nums[0] = 1;
	nums[1] = 2;

		printf("%d, %d ", nums[0], nums[1]);

	for (i = 2; i < 50; i++)
	{
		nums[i] = nums[i - 1] + nums[i - 2];
		printf("%d", nums[i]0);

		if (i != 49)
		{
			printf(", ");
		}
	}

	printf("\n");
	return (0);
}
