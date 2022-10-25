#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - start here
 * @dest: character one
 * @src: character two
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	dest[1000];

	memset(dest, '\0', sizeof(dest));
	strcpy(dest, src);
}
