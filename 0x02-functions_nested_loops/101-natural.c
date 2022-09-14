#include <stdio.h>

/**
 * main - list all natural numbers below 10 with a multiple of  3 and 5
 *
 * Return: Always 0
 */
 
int main(void)
{
	int num, sum;
	sum = 0;

	for (sum = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
