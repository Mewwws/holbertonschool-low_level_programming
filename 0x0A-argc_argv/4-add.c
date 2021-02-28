#include <stdio.h>
#include <stdlib.h>

/**
 * main - free additioner
 * @argc: arg count
 * @argv: arg var pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int i = 0;
	int j;

	for (j = 1; j < argc; j++)
		i += atoi(argv[j]);
	printf("%d\n", i);
	return (0);
}
