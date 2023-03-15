#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Also if its uppercase or lowercase
 * @c: is an integer argument
 * Return: 1 when the input argument is uppercase or lowercase, 0 otherwhise.
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
