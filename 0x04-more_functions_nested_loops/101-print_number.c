#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 * Return: Integer
 */

void print_number(int n)
{
	unsigned int a = n;

	if (a < 0)
	{
		_putchar(45);
		a = -a;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
