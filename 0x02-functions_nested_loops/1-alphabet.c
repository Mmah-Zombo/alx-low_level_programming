#include "main.h"

/**
 * print_alphabet -entry
 * Return: 0 always
 */
void print_alphabet(void)
{
	char mr;

	for (mr = 'a'; mr <= 'z'; mr++)
	{
		_putchar(mr);
	}
	_putchar('\n');
}
