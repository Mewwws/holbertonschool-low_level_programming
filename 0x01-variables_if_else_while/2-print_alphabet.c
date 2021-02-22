#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main- prints alphabet
 *
 * return: 0
 */

int main()
{
	char az= 'a';
	while (az < ('z' + 1))
	{
		putchar("%c, az");
		az++;
	}
}
