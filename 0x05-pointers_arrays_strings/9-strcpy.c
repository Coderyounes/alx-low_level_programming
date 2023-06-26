#include "main.h"

/**
 * _strcpy - function name
 *
 * Description: function copy value from src to dest
 *
 * @dest: value destination
 *
 * @src: value source
 *
 * Return: dest new value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
