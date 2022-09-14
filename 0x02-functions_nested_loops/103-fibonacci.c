
#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers below 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
	long int total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 400000);
	{
		sum = first + second;
		if (sum % 2 ==0)
		{
			total_sum += sum;
		}	
		first = second;
		second = sum;
	}
	print("%li\n", total_sum);
	return (0);
}
