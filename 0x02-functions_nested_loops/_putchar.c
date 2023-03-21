#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to std output
 * @c character to print
 *
 * On success 
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}	
