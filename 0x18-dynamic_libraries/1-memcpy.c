#include "main.h"

/**
 * _memcpy - function that copies memorie area
 * @dest: pointer to return
 * @src: memory to copy to
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
