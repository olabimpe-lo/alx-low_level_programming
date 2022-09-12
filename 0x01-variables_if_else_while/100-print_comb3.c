#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f, g;

	f = 48;
	g = 48;

	while (f < 58)
	{
		g = f + 1;
		while (g < 58)
		{
			putchar(f);
			putchar(g);

			if (f < 56 || g < 57)
			{
				putchar(44);
				putchar(32);
			}
			g++;
		}
		f++;
	}
	putchar(10);

	return (0);
}
