#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabet in lowercase 10 times
 * Return: nothing
*/
void print_alphabet_x10(void)
{

char c;
int i;

for (i = 0; i < 10; i++)
{
for (c = 'A'; c <= 'Z'; c++)
{
_putchar(c + 32);
if (c == 'Z')
_putchar('\n');
}
}

}
