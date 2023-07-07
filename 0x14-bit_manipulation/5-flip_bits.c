#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * @n: num 1
 * @m: num 2
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int k;
	unsigned long int XOR = n ^ m;

	for (j = sizeof(unsigned long int) * 8; j >= 0; j--)
	{
		k = XOR >> j;
		if (k & 1)
			count++;
	}
	return (count);
}
