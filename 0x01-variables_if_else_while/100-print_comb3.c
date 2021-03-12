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
	int b;

	while (a < 10)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if ((a > 7) && (b > 8))
				break;
			putchar(',');
			putchar(' ');
		}
		a++;
	}
		putchar ('\n');
		return (0);
}
