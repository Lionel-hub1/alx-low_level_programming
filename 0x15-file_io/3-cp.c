#include "main.h"

/**
 * open_file - This function opens a file with the specified flags and mode
 * @filename: Is the name of the file to open
 * @flags: Is the flags to use when opening the file
 * @mode: Is the mode to use when creating the file (if applicable)
 * Return: The file descriptor of the opened file, or -1 if an error occurred
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
	return (fd);
}

/**
 * create_a_file - This function creates a file with the specified mode
 * @filename: Is the name of the file to create
 * @mode: Is the mode to use when creating the file
 * Return: 0 on success, -1 on failure
 */
int create_a_file(const char *filename, mode_t mode)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't create file %s\n", filename);
	return (fd);
}

/**
 * copy_data - This function copies data from one file descriptor to another
 * @source_fd: Is the file descriptor to copy data from
 * @dest_fd: Is the file descriptor to copy data to
 * Return: Number of bytes copied or -1 on failure
 */
ssize_t copy_data(int source_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written < bytes_read || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to fd %d\n", dest_fd);
			return (-1);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from fd %d\n", source_fd);
		return (-1);
	}
	return (bytes_written);
}

/**
 * copy_file - This function copies the content of a file to another file
 * @file_from: Is the source file
 * @file_to: Is the destination file
 * Return: 1 on success, -1 on failure
 */
void copy_file(const char *file_from, const char *file_to)
{
	int source_fd, dest_fd, ret_val;
	struct stat st;

	source_fd = open_file(file_from, O_RDONLY, 0);
	fstat(source_fd, &st);

	dest_fd = create_a_file(file_to, 0664);

	copy_data(source_fd, dest_fd);

	ret_val = close(source_fd);
	if (ret_val == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);

	ret_val = close(dest_fd);
	if (ret_val == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);

	exit(EXIT_SUCCESS);
}

/**
 * main - Is the entry point of this program
 * @argc: Is the number of arguments(number of arguments)
 * @argv: Is the argument vector(array of all arguments)
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(EXIT_FAILURE);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
