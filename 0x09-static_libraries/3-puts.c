#include "main.h"

/**
 *_puts - prints a string
 *@str: - line to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
