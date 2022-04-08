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
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);					
return (0);
}
