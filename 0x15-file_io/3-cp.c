#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int cclose(int);
/**
 * main - main program to copy and past content
 * @ac: argument counter
 * @av: argument variable
 * Return: exit codes to STDERR
 */
int main(int ac, char *av[])
{
	int from_fd = -1, to_fd = -1, error = 0, mem_read = 0, _EOF = 1;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(av[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_fd = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from_fd, buf, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			cclose(to_fd);
			cclose(from_fd);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		mem_read += _EOF;
		error = write(to_fd, buf, _EOF);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			cclose(from_fd);
			cclose(to_fd);
			exit(98);
		}

	}
	error = cclose(to_fd);
	if (error == 0)
	{
		cclose(from_fd);
		exit(100);
	}
	error = cclose(from_fd);
		exit(100);
	return (0);
}

/**
 * cclose - format error closing of descriptor
 * @arg: File descriptor
 * Return: Error
 */
int cclose(int arg)
{
	int error;

	error = close(arg);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arg);
	return (error);
}
