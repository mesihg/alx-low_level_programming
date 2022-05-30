#include "main.h"

/**
 * read_textfile - read a text file and prints it
 * @filename: name of the input file name
 * @letters: number of letters to read and print
 *
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t w_fd, r_fd;
char *buf;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buf = malloc(letters);
if (buff == NULL)
{
return (0);
}
r_fd = read(fd, buf, letters);
if (r_fd == -1)
{
return (0);
}
w_fd = write(STDOUT_FILENO, buf, r_fd);
close(fd);
free(buf);
return (w_fd);
}
