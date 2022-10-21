#include "main.h"

/**
 * print_triangle - start here
 * @size: trinagle size
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int a, b, c;
		b = 1;

		for (a = 1; a < size + 1; a++)
		{
			c = a;

			while (c < size)
			{
				_putchar(' ');
				c++;
			}

			c = 1;

			while (c <= b)
			{
				_putchar('#');
				c++;
			}
			b++;
			_putchar('\n');
		}
	_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
