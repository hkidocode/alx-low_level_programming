#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that check if number n is positive, negative, or zero
 * return: 0 (success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("is positive");
else if (n < 0)
printf("is negative");
else
printf("is zero");

return (0);
}
