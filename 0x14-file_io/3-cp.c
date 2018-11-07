#include "holberton.h"
#define BUF_SIZE 10

/**
* main - Entry point
* @argc: the number of arguments passed in
* @argv: a pointer to the array of arguments passed in
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int fd, res, i;
	char *buf;

	i = 0;
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open from */
	fd = open(argv[1], O_RDONLY);
	/* make into a func */
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buf = malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);

	/* reads into buffer BUF_SIZE at a time until the whole file is read */
	do {
		res = read(fd, buf + i, BUF_SIZE);
		i += res;
		if (res == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	} while (res == BUF_SIZE);

	res = close(fd);
	if (res == -1)
	{
		dprintf(2, "Error Can't close fd %i\n", fd);
		exit(100);
	}

	/* open to */
	fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	res = write(fd, buf, i);
	if (res != i)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (res == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	res = close(fd);
	if (res == -1)
	{
		dprintf(2, "Error Can't close fd %i\n", fd);
		exit(100);
	}
	free(buf);
	return (0);
}
