#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{
	int num, num2, filter;
	filter = 1;
	num2 = 1;

	for (num = 0; num < 10; num++)
	{
		for (; num2 <10; num2++)
		{
			putchar(num);
			putchar(num2);
			num2 = filter + 1;
			filter += 1;
			if (num + num2 != 17)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}

	return (0);
}
