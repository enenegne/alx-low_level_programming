#include "main.h"

/**
 * append_text_to_file - appends text to a file.
 * @filename: file to append the text to.
 * @text_content: text to append into the file.
 *
 * Return: 1 if successful else -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, b = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(fd, text_content, b);
		if (a != b)
			return (-1);
	}

	close(fd);

	return (1);
}
