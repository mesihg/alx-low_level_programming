#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: a pointer to the string
 * @b: a value to be filled
 * @n: number of bytes to be filled starting from s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
unsigned char *a = s;

i = 0;

while (n > 0)
{
*a = b;
a++;
n--;
}
return (s);
}
