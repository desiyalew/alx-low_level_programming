#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a simple program that outputs 0-9
 *
 * Return: 0 on success
 */
int main(void)
{
int d;

for (d = '0'; d <= '9'; d++)
putchar(d);
putchar('\n');

return (0);
}
