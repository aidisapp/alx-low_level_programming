#include "main.h"

/**
 * read_textfile - this function reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: this is the name of the file to read
 * @letters: this is the number of letters to read and print
 *
 * Return: If successful, returns the actual number of letters read and printed
 * If file cannot be opened or read, or if there's an error in writing,
 * returns 0. If filename is NULL, also returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_opened, bytes_written;
	int file_desc;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
		if (file_desc < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}

	file_opened = read(file_desc, buffer, letters);
	if (file_opened < 0)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, file_opened);
	free(buffer);
	close(file_desc);

	if (bytes_written < 0 || bytes_written != file_opened)
	{
		return (0);
	}
	return (file_opened);
}
