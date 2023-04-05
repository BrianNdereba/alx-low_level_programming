#include "main.h"

int _strlen(char *s);
int palindrome(char *s, int x, int len);

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
		return (palindrome(s, 0, _strlen(s)));
	}
}

/**
 * _strlen - Return length of a string
 * @s: String
 * Return: String length
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * palindrome - Returns 1 if string is a palindrome, else 0
 * @s: String
 * @x: Checker
 * @len: String length
 * Return: 1 if string is a palindrome, else 0
 */

int palindrome(char *s, int x, int len)
{
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
