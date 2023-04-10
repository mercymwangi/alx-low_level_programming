#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Number of arg
 * @argv: Array of arg
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
