#include "main.h"

/**
 * puts2 - function name
 *
 * Description: function to write index & jump the other until the null
 *
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
