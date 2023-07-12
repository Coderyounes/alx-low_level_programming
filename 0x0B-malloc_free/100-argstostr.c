#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates arguments
 *
 * @ac: argument number
 *
 * @av: arguments string
 *
 * Return: pointer to final string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, len = 0, total = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total += len + 1;
	}

	s = malloc(sizeof(char) * total + 1);
	if (!s)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			s[len++] = av[i][j];
		s[len++] = '\n';
	}
	s[len] = '\0';

	return (s);
}
