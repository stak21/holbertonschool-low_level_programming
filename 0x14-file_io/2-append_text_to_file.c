#include "holberton.h"

/**
* append_text_to_file - appens text at the end of a file
* @filename: the file to append to
* @text_content: the text that will be appended to the file
* Return: 1 (Success), -1 (Failure)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	len = 0;
	while (text_content[len])
		len += 1;

	res = write(fd, text_content, len);

	if (res == -1)
		return (-1);
	res = close(fd);
	if (res == -1)
		return (-1);

	return (1);
}
