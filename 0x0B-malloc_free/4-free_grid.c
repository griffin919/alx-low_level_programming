#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 dimensional array
 * @grid: 2 dimensional grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

