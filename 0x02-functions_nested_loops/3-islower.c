#include "main.h"

/**
 * _islower - Check whether characters are lower case
 * @c: Characters checked by _islower
 * Return:1 - lowercase characters, else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
