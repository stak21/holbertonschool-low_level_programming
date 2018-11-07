#include "holberton.h"
#define BUF_SIZE 1024

/**
* main - Entry point
* @argc: the number of arguments passed in
* @argv: a pointer to the array of arguments passed in
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int fd, fd1, res1, res2, i;
	char *buf;

	i = 0;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open from */
	fd1 = open(argv[1], O_RDONLY);
	/* make into a func */
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buf = malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);

	/* reads into buffer BUF_SIZE at a time until the whole file is read */
	do {
		res1 = read(fd1, buf, BUF_SIZE);
		if (res1 == 0)
			break;
		i += res1;
		if (res1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		res2 = write(fd, buf, res1);
		if (!res2)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (res1 == BUF_SIZE);

	/* open to */
	res1 = close(fd);
	if (res1 == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %i\n", fd);
		exit(100);
	}
	res1 = close(fd1);
	if (res1 == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %i\n", fd);
		exit(100);
	}
	free(buf);
	return (0);
}
