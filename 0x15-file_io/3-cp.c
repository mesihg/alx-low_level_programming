#include "main.h"
#include <stdio.h>


/**
 * display_error_message - prints error message to the stderr screen
 * @file_from: input file fd one
 * @file_to: input file fd two
 * @argv: list of arguments
 *
 * Return: nothing is returned
 */

void display_error_message(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - entry point for programs
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_fd;
	ssize_t nchar_read, nw_fd;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	display_error_message(file_from, file_to, argv);

	nchar_read = 1024;
	while (nchar_read == 1024)
	{
		nchar_read = read(file_from, buff, 1024);
		if (nchar_read == -1)
			display_error_message(-1, 0, argv);
		nw_fd = write(file_to, buff, nchar_read);
		if (nw_fd == -1)
			display_error_message(0, -1, argv);
	}

	err_fd = close(file_from);
	if (err_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_fd = close(file_to);
	if (err_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
