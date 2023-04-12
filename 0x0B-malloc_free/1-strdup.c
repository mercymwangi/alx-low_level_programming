#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - creates a string duplicate
 * @str: The string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, s = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		aaa[s] = str[s];

	return (aaa);
}
