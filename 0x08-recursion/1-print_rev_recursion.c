#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to be printed in reverse
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int x;

	x = 0;
	if (s[x] == '\0')
	{
		return;
	}
	else
	{
		x++;
		_print_rev_recursion(s + 1);
		x--;
		_putchar(s[x]);
	}
}
