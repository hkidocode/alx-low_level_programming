#include "main.h"
/**
 * _islower - function that chech if is lowercase character
 * @c: The character in ASCII code
 * Return: 1 if is lowercase or 0 otherwise
*/
int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}

return (0);

}
