#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile -function that reads a textfile and prints it to POSIX stdout
 * @filename: the file to be read
 * @letters: the number of bytes letters to be read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t r;
	ssize_t w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = (char *) malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);

	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, r);

	if (w == -1 || w != r)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
