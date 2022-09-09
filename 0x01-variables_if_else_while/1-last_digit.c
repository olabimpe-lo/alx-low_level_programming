#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - print the last digit of the number stored in the variable
 *
 * Description - Assign a random number to a variable each 
 * time it is executed
 *
 * Return - Always 0 (Success)
 */

int main(void)

	int n;

	srand(time(0));
	n = ran() - RAND_MAX / 2;

	printf("Last digit of %d is %d\n");
	if(last n >5)
		printf("and is greater than 5\n");
	else if(last n == 0)
		printf("and is 0\n");
	else if(last n < 6 && != 0)
		printf("and is less than 6 and not 0");
	return (0);
