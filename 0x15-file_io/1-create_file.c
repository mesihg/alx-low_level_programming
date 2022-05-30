#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: contents to be written to the created file
 *
 * Return: 1 on success -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	if (!filename)
		return (-1);
	if (!text_content)
		text_content = NULL;
	fd = open(filename, O_CREATE | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
	{
		len++;
	}
	write(fd, text_content, len);
	close(fd);
	return (1);
}
