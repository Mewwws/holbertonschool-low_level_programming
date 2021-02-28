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
	int k;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
			if (argv[j][k] < '0' || argv[j][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		i += atoi(argv[j]);
	}
	printf("%d\n", i);
	return (0);
}
