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
err = 0;
if (argc >= 3)
{
for (i = 1; i < argc; i++)
{
if (!isdigit(argv[i]))
{
err = 1;
}
else
{
result += atoi(argv[i]);
}

}
if (err == 1)
{
n = 1;
printf("%s\n", "Error");
}
printf("%i\n", result);
}


else if (argc == 1)
{
result = 0;
printf("%i\n", result);
}
return (n);
}
