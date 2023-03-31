#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int x;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (x = len; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
