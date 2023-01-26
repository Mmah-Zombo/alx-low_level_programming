#include "main.h"

/**
 * main - the main function
 * @argc: number of arguments passed to main
 * @argv: the list of arguments passed
 *
 * Return: 0
 */
int main(int argc,char  **argv)
{
	int item;
	
	for (item = 0; item < argc; item++)
	{
		printf("%s\n", argv[item]);
	}

	return (0);
}
