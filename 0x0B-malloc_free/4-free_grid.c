#include "main.h"

/**
  * free_grid - frees a 2-D array previously
  * created by 3-alloc_grid.c in curr dir
  * @grid: 2-D array to free
  * @height: Height or rows of the array @grid
  *
  * Return: void (nothing)
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
