#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints 0 - 9
 * Return: 0
 */

int main(void)
{
	int a;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar ('\n');
	return (0);
}
