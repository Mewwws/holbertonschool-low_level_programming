#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabet
 * Return: 0
 */

int main(void)
{
	char az = 'a';

	while (az < ('z' + 1))
	{
		putchar(az);
		az++;
	}
	putchar ('\n');
	return (0);
}
