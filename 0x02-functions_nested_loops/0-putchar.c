#include "main.h"
/**
 * main - Entry Point
 *
 * Description: Print array of charachters using putchar & Loop
 *
 * Return: 0 Always Success
 */

int main(void)
{
	unsigned int i;
	char text[] = "_putchar";

	for (i = 0; i <= sizeof(text); i++)
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}
