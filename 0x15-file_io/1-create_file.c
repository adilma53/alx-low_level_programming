#include "main.h"

/* by adilma53 */
/**
 * create_file - appends text to the end file
 *
 * @filename: file to create
 * @text_content: its content
 *
 * Return: 1 success or 0 for F
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, length = 0, _written;
	mode_t mode = O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, mode);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		_written = write(file_descriptor, text_content, length);

		if (_written != length)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	else
	{
		close(file_descriptor);
		return (1);
	}
}
