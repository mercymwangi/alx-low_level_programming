#include "main.h"
#include <stdio.h>

/**
 * set_bit - functions that sets the value of a bit
 * @n: ptr to the number to be set
 * @index: index of a bit
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
