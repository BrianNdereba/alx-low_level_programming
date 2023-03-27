#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int x;

	while ((x = (len - 1) >= 0))
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}
