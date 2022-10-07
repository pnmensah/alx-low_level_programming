#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, len;
	int *p;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error");
				exit(98);
			}
		}
	}
	len = _strlen(argv[1]) + _strlen(argv[2]) + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
	{
		printf("Error");
		exit(98);
	}
	for (i = 0; i < len; i++)
		p[i] = 0;
	multiply(argv[1], argv[2], p, len);
	print_array(p, len);
	free(p);
	return (0);
}

