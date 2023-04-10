#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints c to standard output
 * @c: The character to be printed
 * Return: 1 on success
 * on error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
~            
