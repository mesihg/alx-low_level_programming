#include <stdio.h>
#include <stdlib.h>

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
if (s[i] >= '0' && s[i] <= '9')
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
 * Return: return 1 (error) or 0 (success)
 */

int main(int argc, char *argv[])
{
int n, i, cns, d, cents;
n = 0, i = 0, cns = 0;
int coins[5] = {25, 10, 5, 2, 1};
if (argc > 1)
{
if (isNumber(argv[1]))
{
n = 1;
cents = atoi(argv[1]);
if (cents >= 0)
{
while (cents != 0)
{
d = cents/coins[i];
if ( d == 0)
{
i++;
}
else
{
cns += d;
cents -= (d * coins[i]);
}
}
}
}
}
  
if (n == 0)
    printf("%i\n", cns);
else
    printf("%s\n", "Error");
return (n);
}
