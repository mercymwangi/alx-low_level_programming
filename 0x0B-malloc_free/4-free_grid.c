#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height of dimensional grid
 * Description: free memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
