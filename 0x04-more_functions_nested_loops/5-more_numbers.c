#include "main.h"

/**
 * more_numbers - prints from 0-14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int n, line, limit, repeat;

	n = '0';
	limit = '9';
	repeat = 0;

	for (line = 0; line <= 10; line++)
	{
		while (repeat < 2)
		{
			while (n <= limit)
			{
				if (limit == '4')
					_putchar('1');
				_putchar(n);
				n++;
			}
			repeat++;
			limit = '4';
			n = '0';
		}
		_putchar('\n');
		repeat = 0;
		n = '0';
		limit = '9';
	}
}	
