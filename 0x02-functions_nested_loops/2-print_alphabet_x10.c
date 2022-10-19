#include "main.c"

/**
 * print_alphabet_x10 - enter
 * Retiurn: void
 */
void print_alphabet_x10(void)
{
	int check;
	char me;
	for (check = 1; check <= 10; check++)
	{
		for (me = 'a'; me <= 'z'; me++)
		{
			_putchar(me);
		}
		_putchar('\n');
	}
}
