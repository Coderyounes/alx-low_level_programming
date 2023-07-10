#include "main.h"

/**
 * str_concat - function name
 *
 * Description: allocate memory & concat two strings
 *
 * @s1: pointer to first string
 *
 * @s2: pointer to second string
 *
 * Return: Null if the operation fail,otherwise the new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, e;
	char *string;

	if (!s1)
	{
		s1 = "";
	}
	else if (!s2)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	string = malloc((i * sizeof(char)) + ((j + 1) * sizeof(char)));

	if (string == NULL)
	{
		return (NULL)
	}

	for (k = 0; s1[k] != '\0'; k++)
		string[k] = s1[k];

	for (e = 0; s2[e] != '\0'; e++)
	{
		string[k] = s2[e];
		k++;
	}

	string[k] = '\0';

	return (string);

}
