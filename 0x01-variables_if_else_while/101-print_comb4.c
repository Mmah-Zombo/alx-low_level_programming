#include <stdio.h>

/**
 * main - enter here
 * Return: 0 always
 */
int main(void)
{
	int num, num2, num3, a, b, c;

	a = 49;
	b = 50;
	c = 50;

	for (num = 48; num < 58; num++)
	{
		for (num2 = a; num2 < 57; num2++)
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
			b += 1;
		}
		a += 1;
		c += 1;
		b = c;
	}
	putchar('\n');
	return (0);
}
