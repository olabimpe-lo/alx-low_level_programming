#include <stdio.h>

/**
 * main - print pairs of double digit combos
 *
 * Description: print pairs of double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int e, f, g, h;

	e = 48;
	while (e < 58)
	{
		f = 48;
		while (f < 48)
		{
			h = f + 1;
			g = e;
			while (g < 58)
			{
				while (h < 58)
				{
					putchar(e);
					putchar(f);
					putchar(32);
					putchar(g);
					putchar(h);
					if (e < 57 || f < 56 || g < 57 || h < 57)
					{
						putchar(44);
						putchar(32);
					}
					h++;
				}
				h = 48;
				g++;
			}
			f++;
		}
		e++;
	}
	putchar(10);
	return (0);
}
