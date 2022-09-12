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
	int e, f, g, i;

	e = 48;
	while (e < 58)
	{
		f = 48;
		while (f < 48)
		{
			i = f + 1;
			g = e;
			while (g < 58)
			{
				while (i < 58)
				{
					putchar(e);
					putchar(f);
					putchar(32);
					putchar(g);
					putchar(i);
					if (e < 57 || f < 56 || g < 57 || i < 57)
					{
						putchar(44);
						putchar(32);
					}
					i++;
				}
				i = 48;
				g++;
			}
			f++;
		}
		e++;
	}
	putchar(10);
	return (0);
}
