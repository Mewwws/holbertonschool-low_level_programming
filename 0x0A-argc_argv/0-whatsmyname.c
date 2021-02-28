#include <stdio.h>

/**
 * main - prints its name
 * @argc: arg count
 * @argv: arg var pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc >= 0)
		printf("%s\n", *argv);
	return (0);
}
