#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints 0 - 9
 * Return: 0
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
		if (a < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar ('\n');
		return (0);
}
