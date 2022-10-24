#include "main.h"

/**
 * print_rev - enter here
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, c, de;

	c = 0;

	de = _strlen(s) + 1;

	char bay[de];

	int b = _strlen(s) - 1;

	for (i = b; i >= 0; i--)
	{
		bay[c] = s[i];
		c++;
	}

	_puts(bay);
}
