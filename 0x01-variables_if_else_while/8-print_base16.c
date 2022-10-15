#include <stdio.h>

/**
 * main - entry
 * Return: 0 all the time
 */
int main(void)
{
	int num, ltr;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (ltr = 97; ltr < 67; ltr++)
		putchar(num);
	putchar('\n');

	return (0);
}
