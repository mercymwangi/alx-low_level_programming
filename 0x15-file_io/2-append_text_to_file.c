#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends text at the end of file
 * @filename: name of the file
 * @text_content: The string to be added at the end of file
 * Return: -1 if function fails or filename is NULL, otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	j = open(filename, O_WRONLY | O_APPEND);

	w = write(j, text_content, len);

	if (j == -1 || w == -1)
		return (-1);

	close(j);
	return (1);
}
