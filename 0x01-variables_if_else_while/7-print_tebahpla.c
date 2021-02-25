#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabet reverse
 * Return: 0
 */

int main(void)
{
	char az = 'z';

	while (az > ('a' - 1))
	{
		putchar(az);
		az--;
	}
	putchar ('\n');
	return (0);
}
