#include "main.h"

/**
 * puts2 - Prints every character of a string, skipping one
 * @str: String to be printed
 * Return: Nothing
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
