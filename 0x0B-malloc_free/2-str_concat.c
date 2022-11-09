#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function name
 * @s1: value one
 * @s2: string two
 *
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *anoda;
	char *i;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	i = malloc(sizeof(char) * (i + j + 1));

	if (i == NULL)
	{
		free(i);
		return (NULL);
	}

	anoda = strcat(s1, s2);

	return (anoda);
}
