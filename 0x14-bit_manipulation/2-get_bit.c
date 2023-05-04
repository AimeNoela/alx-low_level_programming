#include "main.h"

/**
 * get_bit - returns the vaue of a bit at a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit t  extract, starting at 0
 * Return: the index of the bit at index index
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	mask = mask << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
