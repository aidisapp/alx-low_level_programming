#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 * @filename: this is the name of the file to append the text to
 * @text_content: this is the content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, written, content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[content_length] != '\0')
		content_length++;
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	written = write(file_desc, text_content, content_length);
	if (written == -1 || written != content_length)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}
