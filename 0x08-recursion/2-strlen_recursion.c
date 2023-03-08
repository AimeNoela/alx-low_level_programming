#include "main.h"

/**
 * _strlen_recursion - returns the lengh of a string
 * @s: the measured string
 * Return: the lngh of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
