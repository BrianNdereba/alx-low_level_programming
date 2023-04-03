#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: Set of characters to be searched for in s
 * Return: A pointer to byte in s that matches accept, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				return (s + x);
			}
		}
	}
	return (NULL);
}
