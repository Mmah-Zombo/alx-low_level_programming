#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{
	int num, num2, a;

	a = 49;

	for (num = 48; num < 57; num++)
	{
		for (num2 = a; num2 <= 57; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num + num2 != 113)
			{
				putchar(',');
				putchar(' ');

			}
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
