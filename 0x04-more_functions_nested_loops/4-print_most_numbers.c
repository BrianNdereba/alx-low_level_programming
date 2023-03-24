#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: Numbers from  0 to 9 except 2 and 4
 */

void print_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
	if (a == 2 || a == 4)
	{
	continue;
	}
	else
	{
	_putchar(a + '0');
	}
	}
	_putchar('\n');
}
