#include <stdio.h>

/**
 * main - prints entered arguments
 * @argc: arg count
 * @argv: arg var pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc > i)
	{
		printf("%s\n", *argv);
		argv++;
		i++;
	}
	return (0);
}
