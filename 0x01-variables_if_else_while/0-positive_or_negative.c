#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print whether a random number is positive, negative or zero
 *
 * Return: 0 on success
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("0 is zero\n", n);					
	return (0);
}
