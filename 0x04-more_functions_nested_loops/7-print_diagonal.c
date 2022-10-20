#include "main.h"

/**
 * print_diagonal - enter here
 * @n: value of input
 */
void print_diagonal(int n)
{
	int hey, a;

	a = 1;

	if (n > 0)
	{
		for (hey = 1; hey <= n; hey++)
		{
			while (a < hey)
			{
				_putchar(' ');
				a++;
			}
			a = 1;
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n < 0)
	{
		_putchar('\n');
	}
}
