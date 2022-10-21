#include "main.h"

/**
 * print_most_numbers - start here
 */
void print_most_numbers(void)
{
	int u;

	for (u = 48; u <= 57; u++)
	{
		if (u != 50 && u != 52)
		{
			_putchar(u);
		}
	}
	_putchar('\n');
}
