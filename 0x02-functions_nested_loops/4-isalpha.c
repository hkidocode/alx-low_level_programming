#include "main.h"
/**
 * _islower - function that chech if is lowercase or uppercase character
 * @c: The character to print
 * Return: 1 if is lowercase or 0 otherwise
*/
int _islower(int c)
{

if (c >= 65 && c <= 122)
{
return (1);
}

return (0);

}
