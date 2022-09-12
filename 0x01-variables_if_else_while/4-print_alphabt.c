#include <stdio.h>

/**
 * main - print the letter of the alphabets
 *
 * Description: print the letters of the alphabets except e and q
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int f = 97;

	while (f < 123)
	{
		if (f != 101 && f ! = 113)
		{
			putchar(f);
		}
		f++;
	}
	putchar(10);

	return (0);
}
