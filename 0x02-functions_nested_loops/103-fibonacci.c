#include <stdio.h>

/**
 * main - prints the sum of all even fibonacci numbers
 * Return: 0
 */
int main(void)
{
long int i, j, k, sum;

i = 1;
j = 2;
sum = 0;
while (j < 4000000)
{
if (j % 2 == 0)
sum += j;
k = i + j;
i = j;
j = k;
}
printf("%ld \n", sum);
return (0);
}
