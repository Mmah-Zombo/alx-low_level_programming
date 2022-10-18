#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void print_alphabet(void);

void print_alphabet(void)
{
	int ltr;

	for (ltr = 97; ltr < 123; ltr++)
	{
		putchar(ltr);
	}
	putchar(10);
}
#endif
