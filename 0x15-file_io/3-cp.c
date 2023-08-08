#include "main.h"

/**
 * main - Entry point
 *
 * @argc: number of argument
 *
 * @argv: argument vector
 *
 * Return: 0 on Success, otherwise exit
 */
int main(int argc, char *argv[])
{
	int source, dest, read_bytes, write_bytes;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	source = open(argv[1], O_RDONLY);
	if (source < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_bytes = read(source, buf, 1024)) > 0)
	{
		write_bytes = write(dest, buf, read_bytes);
		if (write_bytes < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (read_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(source) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);

	if (close(dest) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);

	return (0);
}
