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
	int c;

	while (a < 10)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if ((a > 6))
					break;
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
		putchar ('\n');
		return (0);
}
