#include "main.h"

/**
 * swap_int - swaps the value of teo integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
