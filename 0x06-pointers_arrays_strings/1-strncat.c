#include "main.h"
#include <string.h>

/**
 * *_strncat - start here
 * @dest: value one
 * @src: value two
 * @n: value three
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src,  n));
}
