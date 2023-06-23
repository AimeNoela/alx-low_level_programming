#include "main.h"

/**
 * _islower - lower case caracter check
 * @c: the caracter to check
 * Return: 1 if c is lower case or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
