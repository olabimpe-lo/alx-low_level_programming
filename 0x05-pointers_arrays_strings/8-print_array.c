#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of array of integers
 * @a : represents array
 * @n : represents integer
 * Return : void
 */

void print_array(int *a, int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; n > m; m++)
		{
			if (m != n - 1)
			{
				printf("%d, ", a[m]);
			}
			else
			{
				printf("%d", a[m]);
			}
		}
	}
	printf("\n");
}
