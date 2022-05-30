#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: contents to be appended to the created file
 *
 * Return: 1 on success -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, w_fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	w_fd = write(fd, text_content, len);

	if (w_fd == -1)
		return (-1);

	close(fd);

	return (1);
}
