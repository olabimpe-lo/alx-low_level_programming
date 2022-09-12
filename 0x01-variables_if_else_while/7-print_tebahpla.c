#include <stdio.h>

/**
 * main - print letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f = 122;

	while (f > 96)
	{
		putchar(f);
		f--;
	}
	putchar(10);

	return (0);
}
