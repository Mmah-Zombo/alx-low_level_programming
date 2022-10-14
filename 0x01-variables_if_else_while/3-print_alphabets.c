#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */
int main(void)

{

	int check, check2;

	for (check = 97; check < 123; check++)
		putchar(check);

	for (check2 = 65; check2 < 91; check2++)
		putchar(check2);

	putchar('\n');

	return (0);

}
