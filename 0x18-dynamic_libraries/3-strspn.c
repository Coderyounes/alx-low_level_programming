#include "main.h"
/**
 * _strspn - function to check the lengh of initial segment
 *
 * @s: pointer to input
 *
 * @accept: pointer to prefix
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, i2;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i2 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i] == accept[i2])
			{
				break;
			}
		}
		if (accept[i2] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
