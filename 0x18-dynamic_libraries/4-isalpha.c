#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * Description: The program _isalpha checks for alphabets
 * @c:The character to be checked
 * Return: 1 if alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
