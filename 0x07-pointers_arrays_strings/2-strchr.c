#include "main.h"
#include <string.h>

/**
 * *_strchr - start here
 * @c: letter whose first occurance should be found
 * @s: string in which 'c' should be found
 *
 * Return: a pointer to d 1st occurrence of the character c/NULL if not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
