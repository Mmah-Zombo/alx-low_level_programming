#include <stdio.h>

/**
 * main - start
 * Return: 0 always
 */
int main(void)
{
	long int so, done, hp;

	so = 612852475143;
	done = 2;

	while (so != 0)
	{
		if (so % done != 0)
		{
			done = done + 1;
		}

		else
		{
			hp = so;
			so = so / done;
			if (so == 1)
			{
				printf("%ld\n", hp);
				break;
			}
		}
	}

	return (0);
}
