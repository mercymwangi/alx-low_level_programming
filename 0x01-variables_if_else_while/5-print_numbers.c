#include <stdio.h>
/**
 * main - Print single digits
 * digits of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = '0';
		for (n = 0; n <= 10; n++)
			printf("%d", n);
	putchar('\n');
	return (0);
}
