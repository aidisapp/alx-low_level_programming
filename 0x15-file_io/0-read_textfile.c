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
	int file_desc;
	char *buff;
	ssize_t bytes_read, bytes_written, total_read = 0;

	if (filename == NULL)
		return (0);
	file_desc = open(filename, O_RDONLY);
	if (file_desc < 0)
		return (0);
	buff = (char *)malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(file_desc);
		return (0);
	}
	while ((bytes_read = read(file_desc, buff, letters)) > 0)
	{
		buff[bytes_read] = '\0';
		bytes_written = write(STDOUT_FILENO, buff, bytes_read);

		if (bytes_written < 0 || bytes_written != bytes_read)
		{
			free(buff);
			close(file_desc);
			return (0);
		}
		total_read += bytes_read;
	}
	if (bytes_read < 0)
	{
		free(buff);
		close(file_desc);
		return (0);
	}
	free(buff);
	close(file_desc);
	return (total_read);
}
