#include "main.h"

/**
 * print_last_digit - Print the last digit of numbers
 * @x: Number to be checked
 * Return: Last digit of a number
 */

int print_last_digit(int x)
{
	int last;

	last = x % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
