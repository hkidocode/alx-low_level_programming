#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @num: number
 * Return: last digit
*/
int print_last_digit(int num)
{
int l;

l = num % 10;

if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}

