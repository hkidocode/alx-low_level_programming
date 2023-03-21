#include "main.h"
/**
 * times_table - function that prints the times table
 * Return: nothing
*/
void times_table(void)
{

int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int product = i * j;
_putchar(product + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

