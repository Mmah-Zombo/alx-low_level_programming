#include "main.h"
#include <string.h>

/**
 * *_memcpy - start here
 * @dest: where the copied memory will be pasted
 * @src: memory area from which 'n' number of bits will be copied
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
