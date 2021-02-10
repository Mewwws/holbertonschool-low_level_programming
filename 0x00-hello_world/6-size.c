#include <stdio>

/*
 * main - prints sizes of data types
 * Return: int 0 success
 */
int main() {
	char charType;
	int intType;
	float floatType;
	long int long_int;
	long long int long_long_int;

	/* prints size of data types */
	printf("Size of a char: %zu byte(s), sizeof(charType)");
	printf("Size of an int: %zu byte(s), sizeof(intType)");
	printf("Size of a long int: %zu byte(s), sizeof(long_int)");
	printf("Size of a long long int: %zu byte(s), sizeof(long_long_int)");
	printf("Size of a float: %zu byte(s), sizeof(floatType)");
	
	return (0);
}
