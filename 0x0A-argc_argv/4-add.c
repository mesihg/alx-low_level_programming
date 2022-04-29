#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, n, err, result;

result = 0;
n = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (isdigit(argv[i]))
{
result += atoi(argv[i]);
}
else
{
n = 1;
break;
}

}

}

else if (n == 0)
{
printf("%i\n", result);
}
else
{
printf("%s\n", "Error");
}
return (n);
}
