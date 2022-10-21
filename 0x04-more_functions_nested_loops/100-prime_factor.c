#include <stdio.h>

/**
 * main - start
 * Return: 0 always
 */
int main(void)
{
	long int n, done, hP;

	n = 612852475143;
	done = 2;
	
	while (n != 0)
	{
		if (n % done !=0)
		{
			done = done + 1;
		}
		else
		{
			hp = n;
			n = n / done;
			if (n == 1)
			{
				printf("%ld\n", hp);
				break;
			}
		}
	}
	return (0);
}
