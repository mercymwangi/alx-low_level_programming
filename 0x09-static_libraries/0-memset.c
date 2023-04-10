#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Starting address of the memory to be filled
 * @b: The disired value
 * @n: Number of bytes to be changed
 * Return: chaged array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;

        for (; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return (s);
}
