 #include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index
 * @n: pointer to the modifiable numbe
 * @index: index of the bit to set starting from 0
 *
 * Return: 1 if it worked
 * otherwise -1 if an error accured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1ul << index);
	return (1);
}