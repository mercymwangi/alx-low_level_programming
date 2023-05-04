#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number if bits one would flip from number to number
 * @n: first num
 * @m: second num
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}
	return (count);
}
