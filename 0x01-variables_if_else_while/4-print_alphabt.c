#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{

	int letter;

	for (letter = 97; letter < 123; letter++)
		if (letter != 101 && letter != 113)
			putchar(letter);
	putchar('\n');

	return (0);

}
