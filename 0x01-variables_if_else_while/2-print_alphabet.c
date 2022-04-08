#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a simple program that prints out the lowercase alphabet 
 *
 * Return: 0 on completion
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);

}
