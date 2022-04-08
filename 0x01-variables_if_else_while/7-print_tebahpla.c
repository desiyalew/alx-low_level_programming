#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a simple program that outputs the lowercase alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}
