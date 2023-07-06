#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit
 * @n: number to be searched
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int new_val;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	new_val = (n >> index) & 1;

	return (new_val);
}
