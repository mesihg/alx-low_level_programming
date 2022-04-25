#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: a pointer for a string to be scanned
 * @accept: a pointer for a substring to be searched
 *
 * Return: returns the length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, k = 0, m = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
else
{
k = 0;
}
}

if (k == 0)
{
break;
}

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
m++;
break;
}
}
}
return (m);
}
