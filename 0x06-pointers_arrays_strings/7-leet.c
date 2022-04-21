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
char leetStr[] = "aAeEoOtTlL";
char leetNum[] = "43071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leetStr[j] != '\0'; j++)
{
if (str[i] == leetStr[j]
{
str[i] = leetNum[j / 2];
}
}

}
	
return (str);
}
