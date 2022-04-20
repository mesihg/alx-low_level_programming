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
if ((dest == NULL) && (src == NULL))
{
return NULL;
}
char *str = dest;
while (*str != '\0')
{
str++;
}

while (*src !='\0')
{
*str++ = *src++;
}
*str = '\0';

return dest;

}
