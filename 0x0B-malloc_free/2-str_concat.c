#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: cancat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = y = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[y] != '\0')
		y++;
	conct = malloc(sizeof(char) * (j + y + 1));

	if (conct == NULL)
		return (NULL);
	j = y = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}
	while (s2[y] != '\0')
	{
		conct[y] = s2[y];
		j++, y++;
	}
	conct[j] = '\0';
	return (conct);
}
