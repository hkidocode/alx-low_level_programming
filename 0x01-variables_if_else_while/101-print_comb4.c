#include <stdio.h>
/**
 * main - program that prints all possible combinations of digits numbers
 * Return: 0 (success)
*/
int main(void)
{

int i;
int j;
int k;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(48 + i);
putchar(48 + j);
putchar(48 + k);

if (i != 7 && j != 9 && k != 10)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
