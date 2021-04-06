#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - allocates memory for an array
 * @width: width
 * @height: height
 * Return: pointer to ar
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	for (i = 0, i < height, i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (, i >= 0, i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width, j++)
			ar[i][j] = 0;
	}
	return (ar);
}
