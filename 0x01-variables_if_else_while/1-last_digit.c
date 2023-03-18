#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that retreive the last digit of a number
 * Return: 0 (success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int last_n = n % 10;
if (last_n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
else if ((last_n > 0 && last_n < 6) || last_n < 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_n);
else if (last_n == 0)
printf("Last digit of %d is %d and is 0\n", n, last_n);

return (0);
}
