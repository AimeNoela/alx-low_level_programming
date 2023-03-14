#include "main.h"

/**
 * _strlen - function that counts array
 * @s: array of element
 * Return:1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup -  function returns a pointer to string duplicate of str
 * @str: array of lements
 * @dest: array
 * Return: pointer to array
 */

char *_strdup(char *dest, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	{
		dest[i] = '\0';
	}
	return (dest);
}
