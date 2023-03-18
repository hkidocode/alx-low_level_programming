#include <stdio.h>
/**
 * main - program that convert alphabet to lowercase and uppercase
 * Return: 0 (success)
*/
int main(void)
{

char c;

for (c = 'A'; c <= 'Z'; c++)
{
putchar(c + 32);
}

for (c = 'a'; c <= 'z'; c++)
{
putchar(c - 32);
}

putchar('\n');

return (0);
}
