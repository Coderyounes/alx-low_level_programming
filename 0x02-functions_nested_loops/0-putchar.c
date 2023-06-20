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
	int i;
	char text[] = "_putchar";

	for (i = 0; i < 8; i++)
	_putchar(text[i]);
	_putchar('\n');

	return (0);
}
