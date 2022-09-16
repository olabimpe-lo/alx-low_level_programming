#include "main.h"

/**
 * print_diagonal - print \ character, n number of times
 * @n: number of times \ should be printed
 *
 * Return: n
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for(a = 1; a <= n; a++)
		{
				for (b = 1; b <= n; b++)
				{	
					if (a == b)
					{
						_putchar(92);
						break;
					}
					_putchar(' ');
				}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
