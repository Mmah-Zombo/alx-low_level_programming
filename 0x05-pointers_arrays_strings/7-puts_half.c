#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - start here
 * @str: value to be checked
 */
void pts_half(char *str)
{
	int b, hey, half;

	b = strlen(str);

	if (b % 2 == 0)
	{
		half = b % 2;
	}
	if (b % 2 != 0)
	{
		half = (b - 1) % 2;
	}
	for (hey = (half - 1); hey < half; hey++)
	{
		printf("%c", str[hey]);
	}
	putchar('\n');
}
