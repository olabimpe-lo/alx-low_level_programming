#include <stdio.h>
#include "main.h"

/**
 * main - print numbers from 1-100
 * @Fizz: multiples of three
 * @Buzz: multiples of five
 * @FizzBuzz: multiples of both three and five
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if(n % 5 == 0 && n % 3 == 0)
		       printf("FizzBuzz");
		else if (n % 5 == 0)
		if (n == 100)
			printf("Buzz");
		else
			printf("Buzz");
		else if(n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);
	}
	printf("\n");
	return (0);
}	

