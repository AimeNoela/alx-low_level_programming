#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: if str1 < the negative difference
 * if str 1 = str2, 0
 * if str 1 > str 2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
