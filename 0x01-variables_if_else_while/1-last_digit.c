#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - checks last digit */
/* return: 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is,n");
	n = (n % 10);
	if (n > 5)
	{
		printf("%d and is greater than 5,n");
	}
	else if (n = 0)
	{
		printf("%d and is 0,n");
	}
	else if (n < 6)
	{
		printf("%d and is less than 6 and not 0,n");
	}
	return (0);

}