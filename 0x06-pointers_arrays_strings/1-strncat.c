#include "main.h"

/**
 * strncat - concatenates two strings at most n times
 * @dest: a pointer for input char dest
 * @src: a pointer for input char src
 * @n: input how many bytes from src to be concatenated
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int k = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[k] != '\0')
{
k++;
}

if (n < k)
{
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
}
else
{
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
}
return (dest);
}
