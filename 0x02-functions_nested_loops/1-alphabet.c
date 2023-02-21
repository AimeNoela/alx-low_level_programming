#include "main.h"
#include <stdio.h>
/**
 * main -main block
 * print_alphabet - print alphabet in lowecases
 * Retuen: 0
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
