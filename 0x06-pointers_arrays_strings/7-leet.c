#include "main.h"

/**
 * *leet - start here
 * @z: value to be used
 *
 * Return: a string of characters
 */
char *leet(char *z)
{
	int i, a, c;

	a = 0;

	c = 0;

	for (i = 0; z[i] != '\0'; i++)
	{
		a++;
	}

	while (c <= a)
	{
		if (z[c] == 'a' || z[c] == 'A')
		{
			z[c] = '4';
		}
		if (z[c] == 'e' || z[c] == 'E')
		{
			z[c] = '3';
		}
		if (z[c] == 'o' || z[c] == 'O')
		{
			z[c] = '0';
		}
		if (z[c] == 't' || z[c] == 'T')
		{
			z[c] = '7';
		}
		if (z[c] == 'l' || z[c] == 'T')
		{
			z[c] = '1';
		}

		c++;
	}

	return (z);
}
