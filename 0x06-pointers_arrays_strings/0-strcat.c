#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer for char dest
 * @src: a pointer for char src
 *
 * Return: combined/concatenated string
 */

char *_strcat(char *dest, char *src)
{
int i;
int length = 0;
for (i = 0; dest[i]; i++)
{
length++;
}

char* str = dest + length;
while (*src != '\0')
{
*str++ = *src++;
}
*str = '\0';
return desti;
}
