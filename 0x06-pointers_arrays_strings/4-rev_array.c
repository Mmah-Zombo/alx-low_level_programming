#include "main.h"

/**
 * reverse_array - start here
 * @a: array
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
