#include "main.h"

/**
 * *leet - start here
 * @z: value to be used
 *
 * Return: a string of characters
 */
char *leet(char *z)
{
	int i, ltrcheck;

	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	i = 0;

	while (z[i] != '\0')
	{
		ltrcheck = 0;

		while (ltrcheck < 10)
		{
			if (z[i] == letters[ltrcheck])
			{
				z[i] = replace[ltrcheck];
			}
			ltrcheck++;
		}
		i++;
	}

	return (z);
}
