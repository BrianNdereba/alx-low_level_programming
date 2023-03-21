#include "main.h"

/**
 * _isalpha - Check whether characters alphabets
 * @c: Characters checked by _islower
 * Return:1 - alphabetic characters, else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
