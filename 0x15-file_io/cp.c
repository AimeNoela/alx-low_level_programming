#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024

void print_usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

void print_read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}

void print_write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}

void print_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
}

/**
 * cp - copies the content of a file to another file
 * @file_from: the name of the source file
 * @file_to: the name of the destination file
 *
 * Return: 0 on success, otherwise the error code
 */
int cp(char *file_from, char *file_to)
{
	char buffer[BUFFER_SIZE];
	int fd_from, fd_to;
       	ssize_t num_read, num_written;
	int ret = 0;

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{

		print_read_error(file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_write_error(file_to);
		close(fd_from);
		return (99);
	}
	while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);

		if (num_written != num_read)
		{
			print_write_error(file_to);
			ret = 99;
			break;
		
		}
	}

	if (num_read == -1)
	{
		print_read_error(file_from);
		ret = 98;
	}

	if (close(fd_from) == -1)
	{
		print_close_error(fd_from);
		ret = 100;
	}

	if (close(fd_to) == -1)
	{
		print_close_error(fd_to);
		ret = 100;
	}

	return (ret);
}

