#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNumber - checks if @s is a number
 * @s: a pointer for char s
 *
 * Return: return 1 is its a number 0 otherwise
 */

int isNumber(char *s)
{
int i;
i = strlen(s);
while (i--)
{
if (s[i] > 47 && s[i] < 58)
	continue;
return (0);
}
return (1);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, n, result;

result = 0;
n = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (isNumber(argv[i]))
	result += atoi(argv[i]);
else
	n = 1;
}
}
if (n == 0)
	printf("%i\n", result);
else
	printf("%s\n", "Error");
return (n);
}
