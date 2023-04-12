#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the actual number of letters it could read and print, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_written;
	char buf[BUFSIZ];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	num_read = read(fd, buf, letters);

	if (num_read == -1)
	{
		close(fd);
		return (0);
	}

	num_written = write(STDERR_FILENO, buf, num_read);

	if (num_written == -1 || num_written != num_read)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (num_written);
}
