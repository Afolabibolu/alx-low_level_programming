#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */

int main(void)
{
int i = 0;
int j = 0;
for (i = '0'; i <= '8'; i++)
{
for (j = '1'; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (!(i == '8' && j == '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
