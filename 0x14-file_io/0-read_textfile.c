#include "holberton.h"

/**
* read_textfile - reads a text file and prints it to stdout
* @filename: the file name to read from
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print
* otherwise an error return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len, i;
	int res;
	char *buf;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	/* read into buf */
	res = read(fd, buf, letters);
	if (!res)
		return (0);
	buf[letters] = '\0';
	for (i = 0; buf[i] != '\0'; i += 1)
	len += 1;

	/* close */
	res = close(fd);
	if (res != 0)
		exit(-1);
	res = write(STDOUT_FILENO, buf, len);
	if (res != len)
		return (0);
	free(buf);

	return (len);
}
