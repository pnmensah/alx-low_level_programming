#include <main.h>
#include <stdio.h>

//**
// * main - Entry point
// *
// * Return: Always 0 (Success)
// */

int main(void)
{
char c[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
putchar(c[i]);
}
putchar('\n');
return (0);
}
