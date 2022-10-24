#include "main.h"
#include <stdio.h>

/**
 * rev_string - start here
 * @s: value to used
 */
void rev_string(char *s)
{
	int i, checker, me;

	checker = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		checker++;
	}
	for (me = (check - 1); me >= 0; me--)
	{
		putchar(s[me]);
	}
	putchar('\n');
}
