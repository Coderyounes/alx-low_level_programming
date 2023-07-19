#include "function_pointers.h"

/**
 * print_name - Function call other function using ptr & print name
 *
 * @name: pointer to a String
 *
 * @f: pointer to function
 *
 * Return: Nothing it's void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
