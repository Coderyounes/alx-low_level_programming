#include "main.h"

/**
 * _strncpy - function name
 *
 * Description: copy a variable value to another variable
 *
 * @src: pointer to src string
 *
 * @dest: pointer to dest string
 *
 * @n: the most byte used
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
