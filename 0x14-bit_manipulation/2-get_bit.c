#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit to a given index
 * @n: number to be searched
 * @index: index to bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
