#include <stdio.h>

/**
 * main - enter here
 *
 * Return: 0 always
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		if (num % 5 == 0 && num % 3 != 0)
		{
			if (num == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		if (num % 5 != 0 && num % 3 != 0)
		{
			printf("%d ", num);
		}
	}
	putchar('\n');

	return (0);
}
