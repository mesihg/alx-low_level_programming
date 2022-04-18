#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: a pointer for char dest
 * @src: a pointer for char src
 *
 * Return: returns the dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
