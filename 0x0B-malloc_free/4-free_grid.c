#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - allocates memory for an array
 * @grid: to free
 * @height: of the grid
 * Return: pointer to ar
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(ar[i]);
		free(ar);
		i--;
	}
}
