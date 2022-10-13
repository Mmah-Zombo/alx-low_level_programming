#include <stdio.h>

/**
 * main - starting point
 * Return: 0 no matter what
 */
int main(void)
{
	char ltr;
	int num;
	long lnum;
	long long llnum;
	float fnum;

	printf("Size of a char: %ld byte(s)\n", sizeof(ltr));
	printf("Size of an int: %ld byte(s)\n", sizeof(num));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lnum));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(llnum));
	printf("Size of a float: %ld byte(s)\n", sizeof(fnum));

	return (0);
}
