#include "main.h"

/**
  * alloc_grid - returns a pointer to a
  * two dimensional array of integers
  * @width: Width of the array
  * @height: Height of the array
  *
  * Description - each element of the grid
  * should be initialized to 0
  * If @width or @height is 0 or negative,
  * return NULL
  *
  * Return: A pointer to the 2-D array.
  * Otherwise, return NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j < width; j++)
			{
				free(grid[j]);
			}
			return ('\0');
		}
		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}
	}
	return (grid);
}
