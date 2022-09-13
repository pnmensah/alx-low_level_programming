#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
int i, j, k, l;

i = 1;
j = 2;
printf("%d, %d, ", i, j);
for (k = 0; k < 48; k++)
{
l = i + j;
printf("%d", l);
if (k != 47)
printf(", ");
i = j;
j = l;
}
printf("\n");
return (0);
}
