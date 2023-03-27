#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int _strlen(char *s)
	{
		int len = 0;

		while (*s != '\0')
		{
			len++;
			s++;
		}
		return (len);
	}
	int lenx = _strlen(s);
	int x;

	while ((x = (lenx - 1) >= 0))
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}
