#include "main.h"

/* by adilma53 */

#define BUF_SIZE 1024

void copy_file(const char *file_from, const char *file_to);

/**
 * main - Entry point. Copies a file from one path to another based on command
 * line arguments
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 97-100 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
/**
 * copy_file - Copies a file from one path to another
 *
 * @file_from: Path of the file to copy from
 * @file_to: Path of the file to copy to
 *
 * Return: Nothing
 */
void copy_file(const char *file_from, const char *file_to)
{
	int file_from_fd, file_to_fd;
	ssize_t num_read;
	char buf[BUF_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((num_read = read(file_from_fd, buf, BUF_SIZE)) > 0)
	{
		if (write(file_to_fd, buf, num_read) != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(file_from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_fd);
		exit(100);
	}

	if (close(file_to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_fd);
		exit(100);
	}
}
