#include "main.h"

/**
 * _isupper - cher for upper case charcters
 * @n: the value to check
 * Return: 1 for upper character and 0 otherwise
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	return (0);
}
