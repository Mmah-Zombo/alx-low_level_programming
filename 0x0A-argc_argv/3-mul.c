#include "main.h"

/**
 * main - the main function
 * @argc: number of arguments passed to main
 * @argv: the list of arguments passed
 *
 * Return: 0
 */
int main (int argc, char **argv)
{
	int i;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}

	printf("%d\n", mul);

	return (0);
}
