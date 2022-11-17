#include "3-calc.h"

/**
 * op_add - function name
 * @a: value one
 * @b: value two
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function name
 * @a: value one
 * @b: value two
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - function name
 * @a: value one
 * @b: value two
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function name
 * @a: value one
 * @b: value two
 *
 * Return: quotient of a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function name
 * @a: value one
 * @b: value two
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
