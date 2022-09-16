#include "main.h"

/**
 * more_numbers - prints from 0-14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int n, line, limit;

	n = '0';
	limit = '9';

	for (n = '0'; n <= '14'; n++)
	{
		while (line = 0; line < 10; line++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
