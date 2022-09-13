#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j, k;
if (n > 15 || n < 0)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (j == 0)
{
_putchar(k + '0');
}
else if (k < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
}
