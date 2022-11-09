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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	anoda = strcat(s1, s2);

	char *i;
	i = malloc(sizeof(anoda));

	if (i == NULL)
	{
		return (NULL);
	}
	return (anoda);
}
