#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arg passed
 * @argc: Number of argument
 * @argv: Array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
