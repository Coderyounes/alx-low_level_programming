#include "main.h"

/**
 * string_nconcat - function to concat 2 strings based on n bytes
 *
 * @s1: pointer to first string;
 *
 * @s2: pointer to second string
 *
 * @n: number of bytes
 *
 * Return: new concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, l_s1 = 0, l_s2 = 0;

	if (!s1)
	{
		s1 = "";
	}

	if (!s2)
	{
		s2 = "";
	}

	l_s1 = strlen(s1);
	l_s2 = strlen(s2);

	string = malloc(sizeof(char) * (l_s1 + n + 1));

	if (!string)
	{
		return (NULL);
	}

	for (i = 0; i < l_s1; i++)
	{
		string[i] = s1[i];
	}

	for (j = 0; j < l_s2 && j < n; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i] = '\0';

	return (string);

}
