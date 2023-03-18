#include <stdio.h>
/**
 * main - program that convert alphabet to lowercase
 * Return: 0 (success)
*/
int main(void)
{

char c;

for (c = 'A'; c <= 'Z'; c++)
{
putchar(c + 32);
}
putchar('\n');

return (0);
}
