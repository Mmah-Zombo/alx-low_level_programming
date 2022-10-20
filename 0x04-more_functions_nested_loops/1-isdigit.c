#include "main.h"
#include <stdio.h>

/**
 * _isdigit - enter here
 * @c: the value to be tested
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
