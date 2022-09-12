#include <stdio.h>

/**
 * main - print triple digit combos
 *
 * Description: print triple digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int e, f, g;

	e = 48;
	f = 48;
	g = 48;

	while (e < 58)
	{
		f = e + 1;
		while (f < 58)
		{
			g = f + 1;
			while (g < 58)
			{
				putchar(e);
				putchar(f);
				putchar(g);
				if (e < 55 || f < 56 || g < 57)
				{
					putchar(44);
					putchar(32);
				}
				g++;
			}
			f++;
		}
		e++;
	}
	putchar(10);

	return (0);
}
