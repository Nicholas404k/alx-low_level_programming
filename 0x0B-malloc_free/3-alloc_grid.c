#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - function that returns a pointer to a
  *2 dimensional array of integers.
  *@width: the width of the array
  *@height: the height of the array
  *Return: Pointer to the allocated 2D,  or NULL on failure
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int n, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		grid[n] = (int *)malloc(width * sizeof(int));

		if (grid[n] == NULL)
		{
			for (j = 0; j < n; j++)
				free(grid[j]);
			free(grid);

			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[n][j] = 0;
	}

	return (grid);
}
