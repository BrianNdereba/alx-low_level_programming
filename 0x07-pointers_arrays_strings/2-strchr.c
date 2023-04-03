#include "main.h"
#include <stddef.h>

/**
 * *_strchr - Locates a character in string
 * @s: String containing characters
 * @c: Character to be located
 * Return: A pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (NULL);
}
