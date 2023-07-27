#include <stdio.h>

/**
 * ishowspeed - function execute before the main
 *
 * Return: it's a void
 */

void __attribute__ ((constructor)) ishowspeed()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
