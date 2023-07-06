#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function converts binary num to unsigned int
 * @b: string to be converted
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		num = num * 2 + (b[j] - '0');
	}
	return (num);
}
