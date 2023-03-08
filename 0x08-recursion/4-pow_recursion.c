#include "main.h"

/**
 *  _pow_recursion - returns the value of x raised to power y
 *  @x: first integer to consider
 *  @y: second integer to consider
 *  Return: pow recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
		return (1);
}
