#include "main.h"

/**
 * print_number - prints an integer
 *
 * Return: 0 (Success)
 */

void print_number(int n)
{
	unsigned int c;
	int a, b;

	b = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		c = n;
		while (c / b > 9)
		{
			b = b * 10;
		}
		while (b > 0)
		{
			a = c / b;
			c = c % b;
			_putchar (a + '0');
			b = b / 10;
		}
	}
}
