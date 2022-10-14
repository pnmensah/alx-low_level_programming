#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - print a char
 * @c: char to be printed
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a sting
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(c, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(valist i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
voind print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c}
		{"s", print_s}
		{"i", print_i}
		{"f", print_f}
		{NULL, NULL}
	};
	va_list valist;
	cahr *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (*(p[j].t) != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
