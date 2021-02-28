#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number or arguments
 * @argv: pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
}
