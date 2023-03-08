#include "main.h"

/**
 * _strlen_recursion - returns the lengh of a string
 * @s: the measured string
 * Return: the lngh of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}
