#include <stdio.h>
#include <stdlib.h>

/**
 * main - free multiplier
 * @argc: arg count
 * @argv: arg var pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = atoi(argv[1]);
	int k[5] = {25, 10, 5, 2, 1};
	int l;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (l = 0; l < 5; l++)
	{
	if (j >= k[l])
	{
		i = i + j / k[l];
		j = j % k[l];
	}
	}
	printf("%d\n", i);
	return (0);
}
