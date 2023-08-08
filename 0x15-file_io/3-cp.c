#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments
 *
 * Return: 0 on success, 97, 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, close_src, close_dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open_source_file(argv[1]);
	if (src_fd < 0)
		exit(98);

	dest_fd = open_dest_file(argv[2]);
	if (dest_fd < 0)
	{
		close(src_fd);
		exit(99);
	}

	if (copy_file(src_fd, dest_fd) != 0)
	{
		close(src_fd);
		close(dest_fd);
		exit(99);
	}

	close_src = close(src_fd);
	close_dest = close(dest_fd);

	if (close_src < 0 || close_dest < 0)
	{
		if (close_src < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		if (close_dest < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

	exit(0);
}
/**
 * open_source_file - Function open source file
 *
 * @filename: pointer to destination file
 *
 * Return: opened file
 */
int open_source_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	}
	return (fd);
}

/**
 * open_dest_file - function to open dest file
 *
 * @filename: pointer to file
 *
 * Return: the opened file
 */
int open_dest_file(const char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	}
	return (fd);
}

/**
 * copy_file - function copy content of file to another
 *
 * @src_fd: source file
 *
 * @dest_fd: destination file
 *
 * Return: 0 on Success , otherwise -1
 */
int copy_file(int src_fd, int dest_fd)
{
	char buffer[1024];
	ssize_t bytes_read;

	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(dest_fd, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file descriptor\n");
			return (-1);
		}
	}

	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file descriptor\n");
		return (-1);
	}

	return (0);
}

