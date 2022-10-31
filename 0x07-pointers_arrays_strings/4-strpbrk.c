#include "main.h"
#include <string.h>

/**
 * *_strpbrk - start here
 * @s: value one
 * @accept: value two
 *
 * Retrun: a pointer to d byte in s that matches one of d bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
