#include "main.h"

/**
 * get_endianness - checks if machine is little or big endian
 *
 * Return:0 on success and 1 for litle endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
		return (1);
	else
		return (0);
}
