#include "main.h"

/**
 * sign of a number
 *
 * n:number
 *
 * Return 1 (if n > 0) , return 0 (if n > 1) , return -1 (if n < 0)
 */

int print_sig n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}

