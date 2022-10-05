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
	int i;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	grid = (int **)malloc(height * 8);
	if (grid == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * 4);
		if (grid[i] == NULL)
		{
			return ('\0');
		}
	}
	return (grid);
}
