#include "main.h"

/**
 * _putchar - prints c into std output
 * @c: The character
 * Return: 1, c or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
