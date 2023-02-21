#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number to check
 * Return: 1 for positive number, "-1" for negative number of 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
