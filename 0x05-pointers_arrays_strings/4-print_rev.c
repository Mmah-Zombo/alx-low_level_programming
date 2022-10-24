#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - enter here
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, c;

	char bay[];

	int b = strlen(s) - 1;

	c = 0;

	for (i = b; i >= 0; i--)
	{
		bay[c] = s[i];
		c++;
	}

	puts(bay);
}
