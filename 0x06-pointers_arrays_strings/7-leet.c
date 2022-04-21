#include "main.h"

/**
 * leet - encodes a string
 * @str: a pointer for input type char str
 *
 * Return: returns encoded string
 */

char *leet(char *str)
{

int i, j;
char st[] = "aAeEoOtTlL";
char num[] = "43071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == st[j])
str[i] = num[j];
}
}
	
return (str);
}
