#ifndef HOLBERTON_HEADER
#define HOLBERTON_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void err_98(int fd, char *buf, char *argv);
void err_99(int fd, char *buf, char *argv);
void err_100(int fd, char *buf);
#endif
