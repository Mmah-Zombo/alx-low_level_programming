#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function name
 * @str: string to be duplicated
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	return (strdup(str));
}
