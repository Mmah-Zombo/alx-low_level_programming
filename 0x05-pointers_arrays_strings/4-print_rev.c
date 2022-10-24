#include "main.h"

/**
 * print_rev - enter here
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, c;

	char bay[100];

	int b = _strlen(s) - 1;

	c = 0;

	for (i = b; i >= 0; i--)
	{
		bay[c] = s[i];
		c++;
	}

	_puts(bay);
}
