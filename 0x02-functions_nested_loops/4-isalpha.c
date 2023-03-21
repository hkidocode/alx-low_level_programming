#include "main.h"
/**
 * _isalpha - function that chech if is lowercase or uppercase character
 * @c: The character to print
 * Return: 1 if is lowercase or 0 otherwise
*/
int _isalpha(int c)
{

if (c >= 65 && c <= 122)
{
return (1);
}

return (0);

}
