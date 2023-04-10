#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - writes a program that adds positive numbers
 * @argc: number of args
 * @argv: Array of args
 * Return: 1 on Error, 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int l, m;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (l = 1; l < argc; l++)
	{
		for (m = 0; argv[l][m] != '\0'; m++)
		{
			if (!isdigit(argv[l][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[l]);
	}
	printf("%d\n", sum);
	return (0);
}
