#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function name
 * @s1: one
 * @s2: two
 * @n: another var
 *
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	int i;

	dest = malloc((strlen(s1) + n + 1) * sizeof(char));

	if (dest == NULL)
	{
		return (NULL);
	}

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	
	dest = s1;

	for (i = 0 ; i < n && s2[i] != '\0' ; i++)
	{
		dest[strlen(dest) + i] = s2[i];
	}
	dest[strlen(dest) + i] = '\0';

	return (dest);
}
