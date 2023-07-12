#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of file to appended
 * @text_content: null terminated str to add to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

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
