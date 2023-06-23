#include "main.h"

/**
 * _strncat - concatenates two strings at the most n bytes from scr
 * @src: string to append
 * @dest: string to be be appended upon
 * @n: an integer
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
