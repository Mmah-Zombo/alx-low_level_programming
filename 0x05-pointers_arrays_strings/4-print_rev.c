#include "main.h"

/**
 * print_rev - enter here
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, c;

	c = 0;

	char bay[_strlen(s) + 1];
	int b = _strlen(s) - 1;

	for (i = b; i >= 0; i--)
	{
		bay[c] = s[i];
		c++;
	}

	_puts(bay);
}
