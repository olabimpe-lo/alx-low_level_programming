#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: represents a string
 * Return: void
 */

void puts_half(char *str)
{
	int m = 0, n;

	while (str[m] != '0')
	{
		m++;
	}
	if ( m % 2 == 1)
	{
		n = (m + 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (m / 2);
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
