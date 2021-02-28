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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int i = 0;
	int j = atoi(argv[1]);

	if (j >= 25)
	{
		i = i + j / 25;
		j = j % 25;
	}
	if (j >= 10)
	{
		i = i + j / 10;
		j = j % 10;
	}
	while (j >= 5)
	{
		i = i + j / 5;
		j = j % 5;
	}
	while (j >= 2)
	{
		i = i + j / 2;
		j = j % 2;
	}
	while (j == 1)
	{
		i++;
		j -= 1;
	}
	printf("%d\n", i);
	return (0);
}
