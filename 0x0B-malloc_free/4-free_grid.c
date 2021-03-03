#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: to free
 * @height: of the grid
 * Return: pointer to ar
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
