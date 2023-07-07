#include "main.h"
/**
 * _strpbrk - function to check for the first occurente charactere
 *
 * @s: input string
 *
 * @accept: Letter to check with
 *
 * Return: pointer for matching character in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, i2;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i2 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i] == accept[i2])
			{
			return (s + i);
			}

		}
	}
	return ('\0');
}
