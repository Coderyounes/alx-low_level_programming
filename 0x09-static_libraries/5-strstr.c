#include "main.h"
/**
 * _strstr - function the check the existance of word in string
 *
 * @haystack: string we want to check
 *
 * @needle: string we check for
 *
 * Return: pointer to heystack pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
			break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
