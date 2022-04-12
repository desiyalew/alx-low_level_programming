#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 * */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10(void);
	return (0);
}
void print_alphabet_x10(void)
{
	char n;
	
	for (int i = 0; i < 9; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
