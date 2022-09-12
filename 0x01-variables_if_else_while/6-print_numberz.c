#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: program to print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f;

	f = 48;

	while (f < 58)
	{
		putchar(f);
		f++;
	}
	putchar(10);

	return (0);
}
