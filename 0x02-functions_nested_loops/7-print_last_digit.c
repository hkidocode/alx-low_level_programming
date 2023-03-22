#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @num: number
 * Return: last digit
*/
int print_last_digit(int num)
{
int x;


if (num < 0)
{
num = -num;
}
x = num % 10;
_putchar(x + '0');
return (x);


}

