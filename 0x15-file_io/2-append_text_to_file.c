#include "main.h"

/**
 * append_text_to_file - This function appends text to the end of a file
 * @filename: Is the name of the file to append to
 * @text_content: Is the NULL-terminated string to add to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, res;

	if (filename == NULL)
		return (-1);

	/* Open the file for appending, do not create if it doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Check if text_content argument is NULL */
	if (text_content != NULL)
	{
		/* Calculate the length of the text content */
		while (text_content[len])
			len++;

		/* Write the text content to the file */
		res = write(fd, text_content, len);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
