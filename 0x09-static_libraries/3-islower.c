#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <tring.h>

/**
 * _islower - checks for lowercase character
 *  @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
