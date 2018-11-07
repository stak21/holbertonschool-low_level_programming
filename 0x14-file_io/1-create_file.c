#include "holberton.h"

/**
* create_file - creates a file
* @filename: the filename to create
* @text_content: a NULL terminated string to write to the file
* Return: 1 (Success),  -1 (failure)
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len, res;

	if (filename == NULL)
		return (-1);
	/* open */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);
	len = 0;
	while (text_content[len] != '\0')
		len += 1;

	res = write(fd, text_content, len);
	if (res != len)
		return (-1);
	res = close(fd);
	if (res == -1)
		exit(-1);

	return (1);
}
