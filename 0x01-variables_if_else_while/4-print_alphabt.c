#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabt
 * Return: 0
 */

int main(void)
{
	char az = 'a';

	while (az < ('z' + 1))
	{
		if (az != 'q' && az != 'e')
		{
			putchar(az);
		}
		az++;
	}
	putchar ('\n');
	return (0);
}
