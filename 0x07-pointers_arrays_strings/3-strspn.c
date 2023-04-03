#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String whose initial segment is calculated
 * @accept: Characters to be used to check prefix in s
 * Return: The number of bytes in the prefix of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int x, y;

	len = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				len++;
				break;
			}
		}
		return (len);
	}
	return (len);
}

