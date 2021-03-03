#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: to free
 * @height: of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		free(grid);
		i--;
	}
}
