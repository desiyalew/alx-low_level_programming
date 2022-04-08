#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * this is to check if the number is postive or negative via c program
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%i is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%i is zero\n", n);					
	return (0);
}
