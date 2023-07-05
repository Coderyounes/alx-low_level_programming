#include "main.h"

/**
 * is_palindrome_helper - function act as helper for is_palindrome function
 *
 * @s: pointer to string
 *
 * @begin: index 0 of String
 *
 * @end: length of string
 *
 * Return: 1 if it palindrome , otherwise 0
 */

int is_palindrome_helper(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (s[begin] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, begin + 1, end - 1));
}

/**
 * is_palindrome - function to check if the word is the same after reverse it
 *
 * @s: pointer to string
 *
 * Return: to is_palindrome_helper to process it
 */

int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, strlen(s) - 1));
}
