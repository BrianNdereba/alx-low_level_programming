#include "main.h"

int palindrome(char *s, int len);

/**
 * is_palindrome - Returns 1 if string is a palindrome, else 0
 * @s: String
 * Return: 1 if string is a palindrome, else 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (palindrome(s, 0));
	}
}

/**
 * palindrome - Returns 1 if string is a palindrome, else 0
 * @s: String
 * @len: String length
 * Return: 1 if string is a palindrome, else 0
 */

int palindrome(char *s, int len)
{
	int x = 0;

	while (s[x])
	{
		len++;
	}
	while (x < len / 2)
	{
		if (s[x] != s[len - 1 - x])
		{
			return (0);
		}
		x++;
	}
	return (1);
}
