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
	char *ptr;

	ptr = malloc((strlen(s1) + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (n >= strlen(s2))
	{
		n = s2;
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = strcat(s1, s2, n);

	return (ptr);
}
