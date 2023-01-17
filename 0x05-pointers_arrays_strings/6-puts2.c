#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 -start here
 * @str: value to be tested
 */
void puts2(char *str)
{
	int i, c;

	c = strlen(str);

	for (i = 0; i < c; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
