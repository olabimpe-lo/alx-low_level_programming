#include "main.h"

/**
 * print int _islower(int c)
 *
 * c: c is an ASCII 
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
