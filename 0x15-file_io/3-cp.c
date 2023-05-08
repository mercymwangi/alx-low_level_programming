#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * main - copies contents of a file to another file
 * @argc: The number of arguments in the program
 * @argv: An array of pointers to args
 * Return: 0 on (Success)
 */

int main(int argc, char *argv[])
{
	int fl_from, fl_to;
	ssize_t nread;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fl_from = open(argv[1], O_RDONLY);
	if (fl_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fl_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fl_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((nread = read(fl_from, buf, BUF_SIZE)) > 0)
	{
		ssize_t nwritten = write(fl_to, buf, nread);
		if (nwritten == -1 || nwritten != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fl_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_from);
		exit(100);
	}

	if (close(fl_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_to);
		exit(100);
	}

	exit(0);
}
