#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and print it to POSIX
 * @filename: text file being read
 * @letters: number of letters that will be read
 * Return: w- atual number of bytes, 0 if it fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
