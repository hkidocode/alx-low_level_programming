#include <stdio.h>
/**
 * main - program that convert alphabet to lowercase except q and e
 * Return: 0 (success)
*/
int main(void)
{

char c;

for (c = 'A'; c <= 'Z'; c++)
{
if (c == 'Q' || c== 'E')
continue;
putchar(c + 32);
}

putchar('\n');

return (0);
}
