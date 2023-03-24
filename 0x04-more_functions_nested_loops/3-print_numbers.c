#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: 0 - 9
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
	putchar('\n');
}
