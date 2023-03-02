#include "main.h"
#include <stdio.h>

/**
 * main - Add one line to this code, so that the program prints a[2] = 98
 * Return: 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

/*
 * write your line of code ...
 * main - magic
 * You are not allowed to use the variable a in your new line of code
 * You are not allowed to modify the variable p
 * You can only write one statement
 * You are not allowed to use ,
 * You are not allowed to code anything else than the line
 * of expected line of code at the expected line
 */

	*(p  + 5) = 98;
/* ...so that this print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
