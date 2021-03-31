#include "holberton.h"
/**
 * main - copies content from file to another
 * Return: 1 if success / 97 -> 100 if error
 */
int main(int ac, char **av)
{
	int a, b ,c, d;
	char e[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	a = open(av[1], O_RDONLY);
	if (a == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	b = open(av[2], O_CREAT | O_RDONLY | O_TRUNC, 664);
	if (b == -1)
	{
		close(a);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	c = read(a, e, 1024)
	while (c > 0)
	{
		c = read(a, e, 1024)
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		d = write(b, e, c);
		if (d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	c = close(a);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", a);
		exit(100);
	}
	c = close(b);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", b);
		exit(100);
	}
	return (0);
}
