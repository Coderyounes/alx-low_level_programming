#include "main.h"

/**
 * read_textfile - function read certain bytes from a file
 *
 * @filename: pointer to file
 *
 * @letters: number of bytes that should read
 *
 * Return: Number of letter readed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t count, reading;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	reading = read(file, buffer, letters);
	if (reading < 0)
		return (0);
	count = write(STDOUT_FILENO, buffer, reading);
	if (count < 0)
		return (0);

	close(file);

	return (count);
}
