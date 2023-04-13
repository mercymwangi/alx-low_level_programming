#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: interger
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int ln1, ln2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ln1 = strlen(s1);
	ln2 = strlen(s2);

	if (n >= ln2)
		n = ln2;

	result = malloc(ln1 + n + 1);

	if (result == NULL)
		return (NULL);

	memcpy(result, s1, ln1);
	memcpy(result + ln1, s2, n);
	result[ln1 + n] = '\0';

	return (result);
}
