#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to be printed in reverse
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int len;
	int x;

	len = 0;
	x = 0;
	while (s[x])
	{
		len++;
	}
	x = len - 1;
	if (x == 0)
	{
		_putchar('\n');
	}
	else
	{
	_putchar(s[x]);
	x--;
	_print_rev_recursion(s - 1);
	}
}
