#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{

	int letter;

	for (letter = 97; letter < 123; letter++)
		if (letter != 71 || letter != 65)
			putchar(letter);
	putchar('\n');

	return (0);

}
