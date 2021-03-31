#include "holberton.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the appended file
 * @text_content: string to put in the file
 * Return: 1 if success / -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, c;
	int b = 0;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	for (b = 0; text_content[b] != '\0'; b++)
			continue;
	c = write(a, text_content, b);
	if (c < 0)
		return (-1);
	return (1);
}
