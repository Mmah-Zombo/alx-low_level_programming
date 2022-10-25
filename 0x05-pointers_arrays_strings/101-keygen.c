#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _atoi - random password generator for 101-crackme
 * @s: value to be tested
 *
 * Return: always 0
 */
int _atoi(char *s)
{
	int i, j, k, je;
	char p[58];

	srand(time(NULL));
	while (je != 2772)
	{
		i = k = je = 0;
		while ((2772 - 122) > je)
		{
			j = rand() % 62;
			p[i] = s[j];
			je += s[j];
			i++;
		}
		while (s[k])
		{
			if (s[k] == (2772 - je))
			{
				p[i] = s[k];
				je += s[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
