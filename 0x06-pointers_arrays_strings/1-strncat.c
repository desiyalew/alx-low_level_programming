#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @n: size of character to contatenate
 * @f: s1
 * @y: s2
 * Return: Always 0.
 */
char *_strncat(char *f, char *y, int n)
{

	int i = 0, c = 0, s = 0;

	while (f[i] != '\0')
	{
		i++;
	}
	while (f[c] != '\0')
	{
		c++;
	}

	while (s <= c)
	{
		if (n > 0)
		{
		f[i] = y[s];
		s++;
		i++;
		n--;
		}
		else
		{
			break;
		}
	}
	return (f);
}
