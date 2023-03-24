#include "main.h"

/**
 * more_numbers - function that print numbers from 0 to 14, 10 times
 * Return: none
*/

void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 14; j++)
{
_putchar(j + 48);
}
_putchar('\n');
}

_putchar('\n');
}
