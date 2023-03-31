#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 * @c: String to be capitalized
 * Return: Capitalized string
 */

char *cap_string(char *c)
{
	int count = 0;

	while (c[count] != '\0')
	{
		if (c[0] >= 97 && c[0] <= 122)
		{
			c[0] = c[0] - 32;
		}
		if (c[count] == ' ' || c[count] == '\t' || c[count] == '\n'
		    || c[count] == ',' || c[count] == ';' || c[count] == '.'
		    || c[count] == '!' || c[count] == '?' || c[count] == '"'
		    || c[count] == '(' || c[count] == ')' || c[count] == '{'
		    || c[count] == '}')
		{
			if (c[count + 1] >= 97 && c[count + 1] <= 122)
			{
				c[count + 1] = c[count + 1] - 32;
			}
		}
		count++;
	}
	return (c);
}
