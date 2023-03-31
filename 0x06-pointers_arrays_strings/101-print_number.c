#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	if ((x / 10) != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
