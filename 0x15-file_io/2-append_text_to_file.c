#include "main.h"

/**
 * append_text_to_file - function to append a text to a existing file
 *
 * @filename: pointer to file
 *
 * @text_content: pointer to text content
 *
 * Return: -1 if fail , 1 on Success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, w_check;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
		if (file < 0)
			return (-1);

	if (text_content != NULL)
	{
		for (; text_content[i]; i++)
			;

		w_check = write(file, text_content, i);
			if (w_check < 0)
				return (-1);
	}
	close(file);
	return (1);
}
