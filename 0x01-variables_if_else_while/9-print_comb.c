#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{
	int comb;

	for (comb = 48; comb < 58; comb++)
		putchar(comb);
		putchar(',');
	putchar('\n');

	return (0);
}
