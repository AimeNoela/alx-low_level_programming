#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file to append to
 * @text_content: NULL terminated string to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file in write-only mode and append to the end */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	/* If text_content is not NULL, write it to the end of the file */
	if (text_content != NULL)
	{
		text_length = strlen(text_content);

		/* Write the text to the end of the file */
		bytes_written = write(file_descriptor, text_content, text_length);
		if (bytes_written == -1)
			return (-1);
	}

	/* Close the file and return 1 to indicate success */
	close(file_descriptor);
	return (1);
}
