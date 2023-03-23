#include "main.h"

/**
 * _isupper - check whether character is upper case
 * @c: character to be checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	for (c = 0; c++)
	{
		if (c >= 65; c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
