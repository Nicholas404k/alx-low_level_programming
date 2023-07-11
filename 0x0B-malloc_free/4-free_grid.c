#include "main.h"
#include <stdlib.h>
/**
  *free_grid - function that frees a 2 dimensional grid
  *previously created by your alloc_grid function
  *@grid: the grid to be freed
  *@height: the height of the grid
  *Return: always 0
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
