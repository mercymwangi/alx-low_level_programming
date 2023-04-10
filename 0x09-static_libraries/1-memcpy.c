#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: numer of bytes
 * Return: copied meory with n bytes changes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int j = 0;
        int i = n;

        for (; j < i; j++)
        {
                dest[j] = src[j];
                n--;
        }
        return (dest);
}
