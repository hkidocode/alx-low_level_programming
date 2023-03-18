#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: 0 (success)
*/
int main(void)
{

int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(48 + i);
putchar(48 + j);

if (i != 8 & j != 10)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
