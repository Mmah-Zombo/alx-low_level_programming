#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{
	int num, num2, filter;

	filter = 1;
	num2 = 49;

	for (num = 48; num < 57; num++)
	{
		for (; num2 <= 57; num2++)
		{
			putchar(num);
			putchar(num2);
			num2 = filter + 1;
			filter += 1;
			if (num + num2 != 105)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}

	return (0);
}
