#include "main.h"

/**
 * _isdigit - check for digit
 * @n: tne number to check
 * Return: 1 for digit character or 0 otherwise
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
