#include "main.h"

/**
 * print_diagonal - function that print diagonal
 * @n: number of \
 * Return: none
*/

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
