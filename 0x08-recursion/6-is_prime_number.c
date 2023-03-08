#include "main.h"

/**
 * evaluate_num - recursion loop
 * @num: number being evaluated
 * @iterator: number to iterate
 * Return: 1 0r 0
 */

int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}
	else if (num % iterator == 0)
	{
		return (0);
	}

	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}
	return (0);
}

/**
 * is_prime_number - evaluate if the integer is a  prime or not
 * @num: integer
 * Return: evaluate_num
 */

int is_prime_number(int num)
{
	int iterator;

	iterator = 2;

	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (evaluate_num(num, iterator));
}
