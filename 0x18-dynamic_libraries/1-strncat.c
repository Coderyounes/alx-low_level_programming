#include "main.h"

/**
 * _strncat - function name
 *
 * Description: function to cocatenates two strings
 *
 * @src: pointer to source string
 *
 * @dest: pointer to destination
 *
 * @n: most byte used from src
 *
 * Return: concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	for (l = 0; dest[l] != '\0'; l++)
		;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';

	return (dest);
}
