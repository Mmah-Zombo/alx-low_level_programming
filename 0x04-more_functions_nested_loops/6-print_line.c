#include "main.h"

/**
 * print_line - whatever
 * @n: woah
 */
void print_line(int n)
{
	int ut;

	if (n > 0)
	{
		for (ut = 0; ut <= n; ut++)
		{
			_putchar(95);
		}
	}
	_putchar('$');
	_putchar('\n');
}
