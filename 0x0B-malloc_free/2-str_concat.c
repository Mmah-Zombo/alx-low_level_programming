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

	anoda = strcat(s1, s2);

	unsigned int i = sizeof(anoda);

	if (i == NULL)
	{
		return (NULL);
	}
	return (anoda);
}
