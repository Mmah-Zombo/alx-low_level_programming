#include "main.h"
#include <string.h>

/**
 * *_strstr - funtion name
 * @haystack: string one
 * @needle: string two
 *
 * Return: a pointer to the beginning of the located substring ...
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
