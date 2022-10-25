#include <stdio.h>
#include "main.h"

/**
 * print_array - start here
 * @a: array
 * @n: number of array elements to display
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++);
	{
		printf("%d", a[i]);
	}
	putchar('\n');
}
