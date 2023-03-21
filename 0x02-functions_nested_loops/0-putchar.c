#include <stdio.h>
/**
 * main - program that print a word with putchar function
 * Return: 0 (success)
*/
int main(void)
{

char word[] = "_putchar";
int i;

for (i = 0; word[i] != '\0'; i++)
{
putchar(word[i]);
}

return (0);
}
