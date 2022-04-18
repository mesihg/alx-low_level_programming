#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  
int num;
int count;
int total;

srand(time(0));
for (count = 0, total = 2772; total > 122; count++)
{
num = (rand() % 125) + 1;
printf("%c", num);
total -= num;
}
printf("%c", total);

return (0);
  
}
