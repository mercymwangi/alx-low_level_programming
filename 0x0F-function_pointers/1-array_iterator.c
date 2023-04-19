#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function given as parameter on each element
 * @array: array
 * @size: size of the array
 * @action: pointer to function
 * Return :void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
