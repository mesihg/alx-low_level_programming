#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a copy of the string
 * @str: a pointer for the given string
 *
 * Return: return a new copy of @str
 */

char *_strdup(char *str)
{
char *st = NULL;
if (str == NULL)
	return (NULL);

st = malloc(strlen(str) + 1);
if (st != NULL)
	strcpy(st, str);
free(st);
return (st);
}
