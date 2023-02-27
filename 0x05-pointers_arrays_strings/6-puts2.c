#include "main.h"

/**
 * puts2 -print every other character of a string
 * starting with the first character
 * @str: input
 * Return: printed number
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;

	for (a = 0; a <= t; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
