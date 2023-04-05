#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int x;

	x = 0;
	if (s[x] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[x]);
		_puts_recursion(s + 1);
	}
}
