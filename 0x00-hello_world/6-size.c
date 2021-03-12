#include <stdio.h>

/**
 * main - prints sizes of data types
 * Return: int 0 success
 */
int main(void)
{
	char charType;
	int intType;
	float floatType;
	long int long_int;
	long long int long_long_int;

	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
