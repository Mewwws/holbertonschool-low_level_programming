#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - allocates memory for an array
 * @width: width
 * @height: height
 * Return: pointer to ar
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **ar;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
	{
		return (NULL);
		free(ar);
		
	}
	i = 0;
	while (i < height)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
				free(ar);
				
			}
			free(ar);
			return (NULL);
			
		}
		j = 0;
		while (j < width)
		{
			ar[i][j] = 0;
			j++;
			
		}
		i++;
		
	}
	return (ar);
	
}
