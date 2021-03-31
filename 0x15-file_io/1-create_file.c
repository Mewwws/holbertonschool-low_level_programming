#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the created file
 * @text_content: string to put in the file
 * Return: 1 if success / -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int a, c;
	int b = 0;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (a < 0)
		return (-1);
	if (text_content != NULL)
		for (b = 0; text_content[b] != '\0'; b++)
			continue;
	c = write(a, text_content, b);
	if (c < 0)
		return (-1);
	return (1);
}
