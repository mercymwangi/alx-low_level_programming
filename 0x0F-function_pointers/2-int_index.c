#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns index of the first element
 * @array: array
 * @cmp: pointer to the function used to compare
 * @size: number of elements in an array
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
