#include <stdio.h>

/**
 */

int main(void)
{
	int i;
	char text[] = "_putchar";

	for (i = 0; i <= sizeof(text); i++)
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}
