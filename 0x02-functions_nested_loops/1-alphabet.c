#include <stdio.h>
#include <main.h>


void print_alphabet(void);
/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - writes allphabet from a to z
 * Return: 0 always
 */
void print_alphabet(void)
{
	printf("abcdefghijklmnopqrstuvwxyz\n");
	return (0);
}
