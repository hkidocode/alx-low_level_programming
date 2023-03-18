#include <stdio.h>
/**
 * main - program that convert alphabet to lowercase except q and e
 * Return: 0 (success)
*/
int main(void)
{

char c;

for (c = 'Z'; c >= 'A'; c--)
{
putchar(c + 32);
}

putchar('\n');

return (0);
}
