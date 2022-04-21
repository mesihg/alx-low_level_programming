#include "main.h"

/**
 * _strncpy - copies contents of src to dest
 * @dest: a pointer for input type char dest
 * @src: a pointer for input type char src
 * @n: an integer for size
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for ( ; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
