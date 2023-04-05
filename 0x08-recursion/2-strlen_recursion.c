#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 * @s: String to be measured
 * Return: Length of string s
 */

int _strlen_recursion(char *s)
{
	int x;

	x = 0;
	if (s[x] == '\0')
	{
		return (0);
	}
	else
	{
		x++;
		return (1 + _strlen_recursion(s + 1));
	}
}
