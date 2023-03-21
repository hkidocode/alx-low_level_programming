#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: nothing
*/
void jack_bauer(void)
{

int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
putchar('0' + hour / 10);
putchar('0' + hour % 10);
putchar(':');
putchar('0' + minute / 10);
putchar('0' + minute % 10);
putchar('\n');
}
}
}

