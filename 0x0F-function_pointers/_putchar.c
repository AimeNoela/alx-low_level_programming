#include "function_pointers.h"
#include <unistd.h>
/**
 * _putchar - function that print c to stdout
 * @c: character to consider
 * Return: 1  on success
 * on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
