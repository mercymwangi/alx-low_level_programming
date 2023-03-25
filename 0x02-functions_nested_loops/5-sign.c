#include "main.h"
/**
 * print_sign - prints signs of a number
 * Description: The program print_sign prints sign of number
 * @n: The number to be printed
 * Return: 1 if n is greater than 0, -1 if n is less than 0 or 0 if n is 0
 */
int print_sign(int n)
{
	
	if (n > 0)
	{
	       _putchar(43);
	       return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
