#include "main.h"
#include <string.h>

/**
 * *_strncpy - start here
 * @dest: value one
 * @src: value two
 * @n: value three
 *
 * Return: a string of characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
