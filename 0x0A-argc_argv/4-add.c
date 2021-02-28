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
	{		if (*argv[j] < '0' || *argv[j] > '9')
		{
			printf("Error\n");
			return (1);
		}
		i += atoi(argv[j]);
	}
	printf("%d\n", i);
	return (0);
}
