#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument
 * @argv: argument
 * Return: integer
 */

int main(int argc, char *argv[])
{
	unsigned ling mul;
	int i, j;

	if (argc != 1)
	{printf("Error\n");
		exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{ printif("Error\n");
				exit(98); }
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
