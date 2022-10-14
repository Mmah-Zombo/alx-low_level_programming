#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - entry point
 * Return: 0 at the end of the code
 */
int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);	
	return (0);

}
