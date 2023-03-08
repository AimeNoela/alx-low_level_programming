#include "main.h"

/**
 * _evaluate - evaluate the integer
 * @n: the integer
 * @i: the integer
 * Return: natural square root of n
 * or -1 if the number does not have natural square root
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);

	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer
 * @i: the integer
 * Return: Sgrt_recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	else if (i >= 0)
		return (_evaluate(i, n));
}
