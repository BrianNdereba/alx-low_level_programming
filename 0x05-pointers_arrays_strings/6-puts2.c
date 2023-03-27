#include "main.h"

/**
 * puts2 - Prints every character of a string, skipping one
 * @str: String to be printed
 * Return: Nothing
 */

void puts2(char *str)
{
	char *x = str;

	for (*x != '\0')
	{
		_putchar(str[x]);
		x++;
		x++;
	}
	_putchar('\n');
}
