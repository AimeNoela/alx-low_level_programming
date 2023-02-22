#include "main.h"

/**
 * main - print the sum of all multiple of 3 or 5  up to 1024.
 * Return: Always 0.
 */
int main(void)
{
int i, z = 0;

while (i < 1024)
{
if  ((1 % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printif("%d\n", z);
return (0);
}
