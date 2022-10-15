#include <stdio.h>

/**
 * main - enter here
 * Return: 0 always
 */
int main(void)
{
	int num, num2, num3, a, b;

	a = 49;
	b = 50;

	for (num = 48; num < 58; num++)
	{
		for (num2 = a; num2 < 58; num2++)
		{
			for (num3 = b; num3 < 58; num3++)
			{
				putchar(num);
				putchar(num2);
				putchar(num3);
				if (num + num2 + num3 != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	a += 1;
	b += 1;
	}
	putchar('\n');
	return (0);
}
