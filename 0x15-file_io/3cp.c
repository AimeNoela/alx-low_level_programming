#include "main.h"

/**
 * print_usage_error - Prints usage error message
 * Return: void
 */
void print_usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * print_read_error - Prints read error message
 * @file: name of the file that cannot be read
 * Return: void
 */
void print_read_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
}

/**
 * print_write_error - Prints write error message
 * @file: name of the file that cannot be written to
 * Return: void
 */
void print_write_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
}

/**
 * print_close_error - Prints close error message
 * @fd: file descriptor of the file that cannot be closed
 * Return: void
 */
void print_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buffer;
	{
		print_usage_error();
		return (EXIT_FAILURE);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		print_read_error(argv[1]);
		return (EXIT_FAILURE);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (file_to == -1)
	{
		print_write_error(argv[2]);
	return (EXIT_FAILURE);
	}

	do {
		r = read(file_from, *buffer, 1024);

		if (r == -1)
		{
			print_read_error(argv[1]);
			close(file_from);
			close(file_to);
			return (EXIT_FAILURE);
		}
		w = write(file_to, buffer, r);

		if (w == -1)
		{
			print_write_error(argv[2]);
			close(file_from);
			close(file_to);
			return (EXIT_FAILURE);
		}
	} while (r > 0);

	if (close(file_from) == -1)
	{
		print_close_error(file_from);
		return (EXIT_FAILURE);
	}

	if (close(file_to) == -1)
	{
		print_close_error(file_to);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
