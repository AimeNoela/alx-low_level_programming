#include "main.h"

/**
 * leet - encodes a sring t0 1337
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int indx1 = 0, indx2;

	char leet[0] = {'O', 'L', '?', 'E', '?', 'A', '?', '?', '!'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
					str[indx1] - 32 == leet[indx2])
				str[ind1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
