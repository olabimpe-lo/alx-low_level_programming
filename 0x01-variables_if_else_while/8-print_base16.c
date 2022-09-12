#include <stdio.h>

/**
 * main - print the letters of thre alphabets
 *
 * Description: print the letters of the alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f = 0;

	while (f < 48)
	{
		if (f < 10)
			putchar(f + '0');
		else if (f > 41)
			putchar(f - 10 + 'A');
		f++;
	}
	putchar(10);

	return (0);
}
