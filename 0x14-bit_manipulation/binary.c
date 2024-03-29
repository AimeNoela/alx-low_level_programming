#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index;

	if (!b)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		num <<= 1;
		if (b[index] == '1')
			num += 1;
	}

	return (num);
}
