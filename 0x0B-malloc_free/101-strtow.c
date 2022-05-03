#include "main.h"
#include <stdlib.h>

/**
 * countWordNum - count number of words in a string
 * @s: char pointer for string input
 *
 * Return: returns number of words 
 */

int countWordNum(char *s)
{
int i, n;

n = 0;
for (i = 0; s[i]; i++)
{
if (s[i] == ' ')
	if (s[i + 1] != ' ' && s[i + 1] != '\0')
		n++;
else if (i == 0)
	n++;
}
n++;
return (n);
}

/**
 * strtow - split string into words
 * @str: char pointer for string input
 *
 * Rturn: return split words
 */

char *strtow(char *str)
{
int i, j, k ,l, n, wc;
char **ptr;

if (str == NULL || *str == '\0')
	return (NULL);
n = countWordNum(str);

if (n == 1)
	return (NULL);
ptr = (char **)malloc(n * sizeof(char *));
if (ptr == NULL)
	return (NULL);
ptr[n - 1] = NULL;
i = 0;
while (str[i])
{

if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ' ))
{
for (j = 1; str[i + j] != ' '; && str[i + j]; j++)
	;
j++;
ptr[wc] = (char *)malloc(j * sizeof(char));
j--;
if(ptr[wc] == NULL)
{
for (k = 0; k < wc; k++)
	free(ptr[k]);
free(ptr[n - 1]);
free(ptr);
return (NULL);
}

for (l = 0; l < j; l++)
        ptr[wc][l] = str[i + l];
ptr[wc][l] = '\0';
wc++;
i += j;
}
else
{
i++;
}
}
return (ptr);
}
