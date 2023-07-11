#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - function that creates file
 * @filename: the name of the file to be created
 * @text_content: null temeintaed str to write to file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);

		w = write(file, text_content, length);

		if (w == -1 || file == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
