#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a simple program that outputs the lowercase alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
char low, e, q;

e = 'e';
q = 'q';

for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
} 
printf("\n");

return (0);
}
