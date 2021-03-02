#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * *create_array - creates an array and fills it with a char
 * @size: size of the array
 * @c: char filler
 * return:
 */

char *create_array(unsigned int size, char c)
 {
	 int i;
	 char *s = malloc(size * sizeof(char));

	 if (s == NULL)
		 return (NULL);
	 for (i = 0; i < size; i++)
		 s[i] = c;
	 return (str);
 }
