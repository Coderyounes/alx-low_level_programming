#include "main.h"

/**
 * _strcat - function name
 *
 * Description: function to cocatenates two strings
 *
 * @src: pointer to source string
 *
 * @dest: pointer to destination
 *
 * Return: concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	for (l = 0; dest[l] != '\0'; l++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';

	return (dest);
}
