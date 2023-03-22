#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of element of an array
 * @cmp: pointer to the function
 * @array: array to consider
 * Return: index of the first element for which
 * the cmp functin doesnoe return 0, or -1 if no match
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[1] != 0))
				return (i);
		}
	}
	return (-1);
}
