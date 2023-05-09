#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: name of file to create
 * @text_content: text to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, _written, len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	/* open file with read/write permissions for user only */
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_descriptor == -1)
		return (-1);

	/* if text_content exists, write it to the file */
	if (text_content)
	{
		while (text_content[len])
			len++;

		_written = write(file_descriptor, text_content, len);
		if (_written != len)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
