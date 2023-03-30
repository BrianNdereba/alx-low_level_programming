#include "main.h"

/**
 * *string_toupper - Changes lowercase letters to uppercase
 * @x: String to be changed
 * Return: Changed string
 */

char *string_toupper(char *x)
{
	int len = 0;

	while (x[len] != '\0')
	{
		if (x[len] >= 97 && x[len] <= 122)
		{
			x[len] = x[len] - 32;
		}
		len++;
	}
	return (x);
}
