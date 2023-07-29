#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * read_textfile - Program the read I/O file
 * @filename: name of file to be read
 * @letters: Size of to be printed
 * Return: return size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *mem;

	if (filename == NULL)
		return (0);
	mem = malloc(sizeof(char) * letters);
	if (mem == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(mem);
		return (0);
	}

	fdr = read(fdo, mem, letters);
	if (fdr < 0)
	{
		free(mem);
		return (0);
	}
	fdw = write(STDOUT_FILENO, mem, fdr);
	free(mem);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}

