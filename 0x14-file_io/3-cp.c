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
	int fd, fd1, res1, res2;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open */
	buf = malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);

	fd1 = open(argv[1], O_RDONLY);
	err_98(fd1, buf, argv[1]);
	fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	err_99(fd, buf, argv[2]);
	/* reads into buffer BUF_SIZE at a time until the whole file is read */
	do {
		res1 = read(fd1, buf, BUF_SIZE);
		if (res1 == 0)
			break;
		err_98(res1, buf, argv[1]);
		res2 = write(fd, buf, res1);
		err_99(res2, buf, argv[2]);
	} while (res1 >= BUF_SIZE);

	/* close */
	res1 = close(fd);
	err_100(res1, buf);
	res1 = close(fd1);
	err_100(res1, buf);
	free(buf);
	return (0);
}

/**
* err_98 - checks err_98
* @fd: the return value to check
* @buf: needed to free if exit
* @argv: holds the file to print
*/
void err_98(int fd, char *buf, char *argv)
{

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buf);
		exit(98);
	}
}

/**
* err_99 - checks err_99
* @fd: the return value to check
* @buf: needed to free if exit
* @argv: holds the file to print
*/
void err_99(int fd, char *buf, char *argv)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buf);
		exit(99);
	}
}
/**
* err_100 - checks err_100
* @fd: the return value to check
* @buf: needed to free if exit
*/
void err_100(int fd, char *buf)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %i\n", fd);
		free(buf);
		exit(100);
	}
}
