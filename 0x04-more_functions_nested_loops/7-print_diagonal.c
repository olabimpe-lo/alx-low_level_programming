#include "main.h"

/**
 * print_diagonal - print \ character, n number of times
 * @n: number of times \ should be printed
 *
 * Return: n
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\');
		line++;
	}
	_putchar('\n');
}
