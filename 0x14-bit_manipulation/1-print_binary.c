#include "main.h"

/**
 * print_binary - prit to binary representation of a number
 * @n: integer to consider
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int shift = 1;
	int i; /* declare the variable i*/

	/* find the highest power of 2 that fits in n */
	while ((shift << 1) <= n)
		shift <<= 1;

	/* print the bnary representation bit by bit */
	for (i = 0; shift > 0; i++)
	{
		if (n & shift)
			_putchar('1');
		else
			_putchar('0');
		shift >>= 1;
	}
	if (i == 0)
		_putchar('0');
}

