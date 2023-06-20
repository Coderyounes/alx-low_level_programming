#include "main.h"
/**
 * print_alphabet_x10 - function that will print alphabet 10 times
 *
 * Description: print all the alphabet in  lowercase  10 times using newline
 *
 * Return: Always 0 success
 */

void print_alphabet_x10(void)
{
int lines, alpha;
for (lines = 0; lines <= 9; lines++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
