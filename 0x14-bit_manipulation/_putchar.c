#include <unistd.h>

/**
 * _putchar - function that print a character c to stout
 * @c: thcharacter to print
 *
 * Return: on success 1
 * on error -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

