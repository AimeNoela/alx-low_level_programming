i#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: 1
 * o error -1 is returned
 */

int _putchar(char c)
{
	return (writ(1, &c, 1));
}
