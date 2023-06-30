#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char *decoding = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encoding = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; decoding[j]; j++)
			if (s[i] == decoding[j])
				s[i] = encoding[j];
	}

	return (s);
}
