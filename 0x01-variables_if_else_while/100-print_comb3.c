#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
	putchar(a);
	putchar(b);
	if (a == 8 && b == 9)
	{
	putchar('\n');
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
