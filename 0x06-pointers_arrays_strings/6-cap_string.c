#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: a pointer for input type of char
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
int i, j;

char delimiters[] = " \t\n,;.!?\"(){}";

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && (str[i] > 96 && str[i] < 123))
{
str[i] = str[i] - 32;
}
for (j = 0; delimiters[j] != '\0'; j++)
{
if (str[i - 1] == delimiters[j] && (str[i] > 96 && str[i] < 123))
{
str[i] = str[i] - 32;
}
}


}

return (str);
}
