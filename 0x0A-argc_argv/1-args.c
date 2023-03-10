#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return:0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
