#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - Program to create a file with given content
 * @filename: Name of file to be created
 * @text_content: Given Content
 *
 * Return: 1 sucess and -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}
