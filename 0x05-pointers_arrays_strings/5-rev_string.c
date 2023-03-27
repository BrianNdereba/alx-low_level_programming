#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int x;
	int len = 0;
	char reverse = s[0];

	while (s[len] != '\0')
	len++;
	for (x = 0; x < len; x++)
	{
		len--;
		reverse = s[1];
		s[1] = s[len];
		s[len] = reverse;
	}
}
