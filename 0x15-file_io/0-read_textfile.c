#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file
 * @filename: name of the read file
 * @letters: number of chars read
 * Return: number of printed letter if success / 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, c;
	char *b;

	if (filename == NULL)
		return (0);
	a = open("filename", O_RDONLY);
	if (a == -1)
		return (0);
	b = malloc(letters * sizeof(char));
	if (b == NULL)
		return (0);
	c = read(a, b, letters);
	if (c == -1)
	{
		free(b);
		return (0);
	}
	c = write(1, b, c);
	free(b);
	if (c == -1)
		return (0);
	return (c);
}