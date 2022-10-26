#include "main.h"

/**
 * *string_toupper - start here
 *
 * Return: characters or arrays
 */
char *string_toupper(char *z)
{
	int i;

	for (i = 0; z[i] != '\0'; i++)
	{
		if (z[i] >= 'a' && z[i] <= 'z')
		{
			z[i] = z[i] - 32;
		}
	}

	return (z);
}
