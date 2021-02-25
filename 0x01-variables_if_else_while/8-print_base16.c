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
	char az;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (az = 'a'; az < 'g'; az++)
	{
		putchar(az);
	}
	putchar ('\n');
	return (0);
}
