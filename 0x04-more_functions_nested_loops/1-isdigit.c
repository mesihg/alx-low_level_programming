#include "main.h"
/**
 * _isdigit - checks if the given input is a number
 * @c: an input to check if its a number
 * Return: returns 1 if its a number 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
