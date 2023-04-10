#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * __attribute_((unused) - supress compiler warning
 * @argc: number of arg
 * @argv: array of arg
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
