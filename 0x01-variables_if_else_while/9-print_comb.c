#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{
	int comb;

	for (comb = 48; comb < 58; comb++) {
		putchar(comb);
		if (comb < 57)
			putchar(',');
	}
	putchar('\n');

	return (0);
}
