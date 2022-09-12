#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: a program that prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int e, f;
	e = 97;
	f = 65;

	while (e < 123)
	{
		putchar(e);
		e++;
	}

	while (f < 91)
	{
		putchar(f);
		f++;
	}

	putchar(10);

	return (0);
}
