#include "main.h"

/**
 * is_prime_helper - function help is_prime_number to achieve teh Goal
 *
 * @n: integer
 *
 * @i: base number
 *
 * Return: 1 if it prime , otherwise 0
 */

int is_prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - function calculate prime number of n
 *
 * @n: integer
 *
 * Return: n to is prime helper, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
