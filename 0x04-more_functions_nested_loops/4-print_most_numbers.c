#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 to 9
 * Description: exclude 2 and 4
 * Return: numbers from 0 up to 0
 */

void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
