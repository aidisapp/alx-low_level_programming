#include "main.h"

/**
 * create_file - this function creates a file and writes
 * content into it if provided. If file already exists, truncates it
 * @filename: this is the name of the file to create
 * @content: this is the content to write into the
 * file (can be NULL for an empty file)
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *content)
{
	int file_desc, content_length, written;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (!content)
		content = "";

	for (content_length = 0; content[content_length]; content_length++)
		;

	written = write(file_desc, content, content_length);

	if (written == -1 || written != content_length)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);

	return (1);
}
