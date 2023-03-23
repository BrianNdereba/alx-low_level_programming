#include "main.h"

/**
 * _isupper - check whether character is upper case
 * @c: character to be checked
 * Return:1 for uppercase, else 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
