#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: input string one
 * @s2: input string two
 *
 * Return: returns concatenated string
 */

char *str_concat(char *s1, char *s2)
{
char *st = NULL;
st = malloc(strlen(s1) + strlen(s2) + 1);
if (st == NULL)
	return (NULL);
if (st != NULL)
{
char *p = result;
while (*s1) *p++ = *s1++;
while ((*p++ = *s2++));
}
return (st);
}
