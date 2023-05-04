#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - prints character ito std output
 * @c: The character
 * Return: on success 1, on error -1, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
