#include "main.h"

/**
 * append_text_to_file - a funcion append text to a file
 *
 * @filename: pointer to a file
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w_check, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;

		w_check = write(file, text_content, i);
		if (w_check == -1)
			return (-1);
	}

	close(file);
	return (1);
}
