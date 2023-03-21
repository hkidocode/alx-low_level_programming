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
int tens = product / 10;
int ones = product % 10;
if (tens != 0)
{
putchar(product / 10 + '0');
}
else
{
putchar(' ');
}
putchar(product % 10 + '0');
if (j != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}

