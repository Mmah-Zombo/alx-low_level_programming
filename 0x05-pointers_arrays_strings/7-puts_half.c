#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - start here
 * @str: value to be checked
 */
void puts_half(char *str)
{
	int b, hey, half;

	b = strlen(str);

	if (b % 2 == 0)
	{
		half = b / 2;
	}
	if (b % 2 != 0)
	{
		half = (b - 1) / 2;
	}
	if (b % 2 != 0)
	{
		for (hey = (half + 1); hey < b; hey++)
		{
			printf("%c", str[hey]);
		}
	}
	if (b % 2 == 0)
	{
		for (hey = half; hey < b; hey++)
		{
			printf("%c", str[hey]);
		}
	}
	putchar('\n');
}
