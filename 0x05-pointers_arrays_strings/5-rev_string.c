#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - start here
 * @s: value to used
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
