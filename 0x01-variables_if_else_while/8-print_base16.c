#include <stdio.h>
/**
 * main - program that convert alphabet to lowercase except q and e
 * Return: 0 (success)
*/
int main(void)
{

char c;
int i;

for (i = 0; i < 10; i++)
{
putchar(48 + i);
}

for (c = 'A'; c <= 'F'; c++)
{
putchar(c + 32);
}

putchar('\n');

return (0);
}
