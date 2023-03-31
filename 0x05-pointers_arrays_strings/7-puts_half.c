#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 * Return: Nothing
 */

void puts_half(char *str)
{
	int x;
	int len = 0;

	for (x = 0; str[x] != '\0'; x++)
		len++;
	if (len % 2 == 0)
	{
		for (x = len / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
		_putchar('\n');
	}
	else if (len % 2 != 0)
	{
		for (x = (len - 1) / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
		_putchar('\n');
	}
}
