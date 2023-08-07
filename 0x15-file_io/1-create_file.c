#include "main.h"

/**
 * create_file - function to create a file
 *
 * @filename: pointer to file to create
 *
 * @text_content: pointer to content of the new file
 *
 * Return: 1 on Success , -1 if something wrong
 */

int create_file(const char *filename, char *text_content)
{
	int file, w_check, i = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_CREAT | O_WRONLY, S_IWUSR | S_IRUSR);
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
