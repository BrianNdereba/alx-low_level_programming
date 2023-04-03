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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
