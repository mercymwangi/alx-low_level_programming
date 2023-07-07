#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of bit to 0
 * @n: pointer to the number to be altered
 * @index: index of the bit
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
