#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_fd(int fd);

/**
 * create_buf - function that allocates 1024 bytes to a buffer
 * @file: the name of the file storing buffer characters
 * Return:nptr of the allocated buffer
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close_fd - function that closes fd
 * @fd: the file descriptor to close
 */
void close_fd(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, " Error: Can't close fd\n");
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: number of argument passed in the program
 * @argv: an array of pointer to args
 * Return: 0 Always (success)
 * Description: if argument count is not correct exit with code (97)
 * if file_from does not exist or unreadable exit code (98)
 * if file_to cannot be created or written on exit code (99)
 * if file_to or file_from cannot be closed exit with code(100)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, R, W;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	R = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || R == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		W = write(file_to, buf, R);

		if (file_to == -1 || W == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		R = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (R > 0);

	free(buf);
	close_fd(file_from);
	close_fd(file_to);
	return (0);
}

