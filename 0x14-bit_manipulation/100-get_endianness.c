#include "main.h"
#include <stdio.h>

/**
 * get_endianness - fnction that checks endianness
 * Return: for big 0, for little 1
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
