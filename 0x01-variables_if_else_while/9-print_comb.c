#include <stdio.h>

/**
 * main - print the single digit numbers
 *
 * Description: print the single digit numbers
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
		if (f != 57)
		{
			putchar(44);
			putchar(32);
		}
		f++;
	}

	putchar(10);

	return (0);
}
