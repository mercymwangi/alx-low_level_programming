#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to make 2 dimension array
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimension array
 */
int **alloc_grid(int width, int height)
{
	int **meas;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	meas = malloc(sizeof(int *) * height);
	if (meas == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		meas[x] = malloc(sizeof(int) * width);
		if (meas[x] == NULL)
		{
			for (; x >= 0; x--)
				free(meas[x]);

			free(meas);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			meas[x][y] = 0;
	}
	return (meas);
}
