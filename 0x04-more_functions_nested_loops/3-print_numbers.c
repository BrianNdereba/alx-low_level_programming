#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: 0 - 9
 */

void print_numbers(void)
{
	int c;

	for (c >= 48 && c <= 57)
	{
		_putchar(c);
	}
	putchar('\n');
}
