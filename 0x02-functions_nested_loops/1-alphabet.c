#include "main.h"

/**
 * main - Entry point
 *
 * Returns: Always 0 (success)
 */
void print_alphabet(void);
{
	char al;

	al = 'a';

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
}
