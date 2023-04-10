#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to consider
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t num_read = 0, num_written, total_written = 0;
char buf[1024];
if (filename == NULL)
return (0);
/*open file for reading*/
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
/*read from the file and write to standard output */
while ((num_read = read(fd, buf, sizeof(buf))) > 0)
{
num_written = write(STDOUT_FILENO, buf, num_read);
if (num_written != num_read)
{
close(fd);
return (0);
}
total_written += num_written
}
/* clean up and return the number of letters read and written */
close(fd);
return (total_written);
}

