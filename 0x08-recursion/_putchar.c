#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the printed character
 * Return: 1 on success
 * on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
