#include "holberton.h"

/**
* jack_bauer - prints some guy's minutes
* Return: void
*/
void jack_bauer(void)
{
	int s;
	int m;
	int y;
	int n;

	for (s = 0; s < 3; s++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s == 2 && y == 4)
			{
				break;
			}
			for (n = 0; n < 6; n++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar(s + '0');
					_putchar(y + '0');
					_putchar(':');
					_putchar(n + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}
