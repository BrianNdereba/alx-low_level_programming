#include "main.h"

/**
 * print_sign - Prints the sign of the number
 * @n: The number checked by print_sign
 * Return:1 - positive number, -1 - negative number, else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
