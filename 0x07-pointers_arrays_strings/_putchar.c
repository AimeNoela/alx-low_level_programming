#include "main.h"
#include <unistd.h>

/**
 * _putchar - whrite the character c to stdout
 * @c: the character to ptint
 *
 * Return: on success 1
 * on error: - 1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
