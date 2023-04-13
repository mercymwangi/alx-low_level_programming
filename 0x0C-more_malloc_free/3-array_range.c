#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of intergers
 * @min: Minimum range
 * @max: Maximum range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
