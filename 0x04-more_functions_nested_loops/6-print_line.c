#include "main.h"

/**
 * print_line - function that print line
 * @n: number of _
 * Return: none
*/

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i <= 0)
{
_putchar('\n');
}
_putchar('_');
}

_putchar('\n');
}
