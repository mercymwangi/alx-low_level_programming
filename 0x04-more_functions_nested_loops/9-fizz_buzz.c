#include "main.h"
#include <stdio.h>

/**
 * main - print numbers from 1 to 100
 * for multiples of 3 print Fizz instead of number
 * for multiples of 5 print Buzz instead of number
 * for multiples of both 3 and 5 print FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && 1 % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf("%d", i);
		}
	}
	printf(" ");
	printf("\n");
	return (0);
}
