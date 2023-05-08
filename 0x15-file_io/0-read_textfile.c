#include "main.h"

/**
 * read_textfile - function that print letters from file to the stdout
 *
 * @filename: file to write from
 * @letters: letters to write
 *
 * Return: letters writen
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t _read, _written, _letters = letters + 1;
	char *_buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	_buffer = malloc(sizeof(char) * (_letters));
	if (!_buffer)
		return (0);

	_read = read(file_descriptor, _buffer, letters);
	if (_read == -1)
	{
		free(_buffer);
		close(file_descriptor);
		return (0);
	}
	_buffer[_read] = '\0';

	_written = write(STDOUT_FILENO, _buffer, _read);
	if (_written == -1 || _written != _read)
	{
		free(_buffer);
		close(file_descriptor);
		return (0);
	}

	free(_buffer);
	close(file_descriptor);
	return (_written);
}
