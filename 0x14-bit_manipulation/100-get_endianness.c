#include "main.h"

/**
 * get_endianness - functions that checks the endianness
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *num_byte = (char *) &j;

	return (*num_byte);
}
