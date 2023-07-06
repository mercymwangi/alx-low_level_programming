#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary rep of a number
 * @n: the number to be binary printed
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int num;

	for (k = 63; k >= 0; k--)
	{
		num = n >> k;
		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
