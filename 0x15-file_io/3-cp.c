#include "main.h"

char *create_buffer(void);
void close_file(int fd);
void error_exit(int code, const char *message, const char *file);

/**
 * create_buffer - Allocates a BUFFER_SIZE-byte buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
		error_exit(EXIT_FAILURE, "Failed to allocate buffer", NULL);
	return (buffer);
}

/**
 * close_file - Closes the file descriptor `fd`.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		error_exit(EXIT_FAILURE, "Failed to close file", NULL);
}

/**
 * error_exit - Prints an error message to standard error and exits with the
 *              given exit code.
 *
 * @code:    The exit code to use when exiting.
 * @message: The error message to print.
 * @file:    The name of the file associated with the error (or NULL if none).
 */
void error_exit(int code, const char *message, const char *file)
{
	if (file != NULL)
		dprintf(STDERR_FILENO, "Error: %s '%s'\n", message, file);
	else
		dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * main - Copies the contents of one file to another file.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or a non-zero error code on failure.
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	ssize_t bytes_read, bytes_written;
	int source_fd, dest_fd;
	char *buffer;

	if (argc != 3)
		error_exit(EXIT_FAILURE, "Usage: cp file_from file_to", NULL);

	/* Open the source file for reading */
	source_fd = open(file_from, O_RDONLY);
	if (source_fd == -1)
		error_exit(EXIT_FAILURE, "Failed to open file", file_from);

	/* Create the destination file (if it doesn't exist) for writing */
	dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		error_exit(EXIT_FAILURE, "Failed to create file", file_to);

	/* Allocate a buffer for copying data */
	buffer = create_buffer();

	/* Copy data from the source file to the destination file */
	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written < bytes_read)
			error_exit(EXIT_FAILURE, "Failed to write to file", file_to);
	}
	if (bytes_read == -1)
		error_exit(EXIT_FAILURE, "Failed to read from file", file_from);

	/* Free the buffer and close the file descriptors */
	free(buffer);
	close_file(source_fd);
	close_file(dest_fd);

	return (EXIT_SUCCESS);
}
