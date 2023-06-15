#include <unistd.h>
#include <stdio.h>
/**
 * main - Entrypoint
 *
 * Description: write text to standar output using write 1 function
 *
 * Return: 1 mean Error
 */

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, text, sizeof(text));
	return (1);
}
