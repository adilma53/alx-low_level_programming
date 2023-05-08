#include "main.h"

/* by adilma53 */
/**
 * append_text_to_file - appends text to the end file
 *
 * @filename: file to append in
 * @text_content: string to append
 *
 * Return: 1 success or 0 for F
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descripto, length = 0, _written;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[length] != '\0')
			length++;
	}

	file_descripto = open(filename, O_WRONLY | O_APPEND);
	if (file_descripto == -1)
		return (-1);

	if (text_content != NULL)
		_written = write(file_descripto, text_content, length);

	if (_written == -1)
	{
		close(file_descripto);
		return (-1);
	}
	else
	{
		close(file_descripto);
		return (1);
	}
}
