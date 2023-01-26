#include "main.h"

/**
 * main - the main function
 * @argc: number of arguments passed to main
 * @argv: the list of arguments passed
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int i;
	int sum = 0;

    if (argc == 1)
    {
        printf("%d\n", sum);
        return (0);
    }
    
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
        if (atoi(argv[i]) == 0)
        {
            char *num = argv[i];

            if (isupper(argv[i]) || islower(argv[i]))
	        {
                printf("Error\n");
                return (0);
	        }
            else
            {
                sum += atoi(argv[i]);
            }
        }
        else if (atoi(argv[i]))
        {
            sum += atoi(argv[i]);
        }
        else
        {
            printf("Error\n");
            return (0);
        }
		
	}

	printf("%d\n", sum);

	return (0);
}
