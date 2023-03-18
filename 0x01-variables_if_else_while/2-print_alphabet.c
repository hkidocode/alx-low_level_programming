#include <stdio.h>

/**
 * main - program that convert alphabet to lowercase
 * Return: 0 (success)
*/
int main(void)
{
char uppers[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int size = sizeof(uppers) / sizeof(uppers[0]);
char lowers[size];

int i;

for (i = 0; i < size - 1; i++)
{
lowers[i] = uppers[i] + 32;
putchar(lowers[i]);
}

return (0);
}
