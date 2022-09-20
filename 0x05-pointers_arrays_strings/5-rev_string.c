#include "main.h"

/**
 * rev_string - reverse a string
 * @s: s is a string
 * Return: void
 */

void rev_string(char *s)
{
	int j, m, n;
	char He, Sh
		e;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	m = j - 1;
	n = m / 2;
	while (n >= 0)
	{
		He = s[m - n];
		She = s[n];
		s[n] = He;
		s[m - n] = She;
		n--;
	}
}
